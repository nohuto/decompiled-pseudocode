/*
 * XREFs of ?SHRegGetFILETIME@@YAJPEAUHKEY__@@PEBG1PEAU_FILETIME@@@Z @ 0x1803DB728
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800A6F90 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1803E6050 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall SHRegGetFILETIME(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, struct _FILETIME *a4)
{
  int result; // eax
  bool v6; // sf
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]

  v8 = HIDWORD(a1);
  v7 = 8;
  result = RegGetValueW(HKEY_CURRENT_USER, a2, a3, 8u, 0LL, a4, &v7);
  v6 = result < 0;
  if ( result > 0 )
  {
    result = (unsigned __int16)result | 0x80070000;
    v6 = result < 0;
  }
  if ( !v6 )
  {
    if ( v7 == 8 )
      return result;
    result = -2147467259;
  }
  *a4 = 0LL;
  return result;
}
