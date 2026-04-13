/*
 * XREFs of ?HasSubscriptionBeenRecentlyAccessed@Details@SubscribedContentStore@CreativeFramework@@YA_NAEBU_FILETIME@@@Z @ 0x1800692A4
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180067C7C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     <none>
 */

bool __fastcall CreativeFramework::SubscribedContentStore::Details::HasSubscriptionBeenRecentlyAccessed(
        CreativeFramework::SubscribedContentStore::Details *this,
        const struct _FILETIME *a2)
{
  unsigned int v2; // ebx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp+10h]

  v2 = *(_DWORD *)this + 2134720512;
  v5 = *(unsigned int *)this + ((unsigned __int64)*((unsigned int *)this + 1) << 32) + 2592000000000LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  return v2 + ((unsigned __int64)HIDWORD(v5) << 32) > SystemTimeAsFileTime.dwLowDateTime
                                                    + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
}
