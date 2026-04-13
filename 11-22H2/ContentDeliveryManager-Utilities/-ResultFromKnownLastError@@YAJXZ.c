/*
 * XREFs of ?ResultFromKnownLastError@@YAJXZ @ 0x18006A5D0
 * Callers:
 *     ?CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z @ 0x180068418 (-CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z.c)
 *     ?OpenSubscriptionHandle@Details@SubscribedContentStore@CreativeFramework@@YAJPEBGPEAPEAX@Z @ 0x18006999C (-OpenSubscriptionHandle@Details@SubscribedContentStore@CreativeFramework@@YAJPEBGPEAPEAX@Z.c)
 *     ?GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z @ 0x18007968C (-GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18007988C (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?ResultFromWin32Bool@@YAJH@Z @ 0x180079CA8 (-ResultFromWin32Bool@@YAJH@Z.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800CFE34 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

signed int ResultFromKnownLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  if ( result >= 0 )
    return -2147467259;
  return result;
}
