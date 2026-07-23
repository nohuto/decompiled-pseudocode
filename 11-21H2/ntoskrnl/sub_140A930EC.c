/*
 * XREFs of sub_140A930EC @ 0x140A930EC
 * Callers:
 *     sub_140A92E6C @ 0x140A92E6C (sub_140A92E6C.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 sub_140A930EC()
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v1; // rbx
  char v2; // cl
  __int64 v3; // rcx
  char v4; // al
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (_DWORD)dword_140D06884 )
  {
    while ( 1 )
    {
      v2 = dword_140D0E5E0[v1] & 0x3F;
      Affinity.Group = dword_140D0E5E0[v1] >> 6;
      *(_DWORD *)Affinity.Reserved = 0;
      Affinity.Reserved[2] = 0;
      Affinity.Mask = 1LL << v2;
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v3 = *((_QWORD *)KeGetCurrentPrcb() + 4404);
      if ( *((_BYTE *)KeGetCurrentPrcb() + 141) != 2 )
        break;
      v4 = *((_BYTE *)CurrentPrcb + 64);
      if ( v4 != 15 && v4 != 6 )
        break;
      if ( (v3 & 0x200) == 0 || (__readmsr(0x1A0u) & 0x800) != 0 )
        goto LABEL_10;
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= (unsigned int)dword_140D06884 )
        goto LABEL_8;
    }
    DbgPrint("This is a non-BTS processor - no branch tracing will occur.\n");
LABEL_10:
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    return 0LL;
  }
  else
  {
LABEL_8:
    result = 1LL;
    dword_140D4E024 = *((char *)CurrentPrcb + 64);
    dword_140D575E4 = 1;
  }
  return result;
}
