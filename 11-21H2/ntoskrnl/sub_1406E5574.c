/*
 * XREFs of sub_1406E5574 @ 0x1406E5574
 * Callers:
 *     sub_1406E5528 @ 0x1406E5528 (sub_1406E5528.c)
 *     sub_140956298 @ 0x140956298 (sub_140956298.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_140778D60 @ 0x140778D60 (sub_140778D60.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_14095B658 @ 0x14095B658 (sub_14095B658.c)
 */

__int64 __fastcall sub_1406E5574(int a1, const WCHAR *a2, int a3, int a4, int a5, unsigned int *a6, int a7, int a8)
{
  int v8; // r12d
  unsigned int *v9; // rbx
  unsigned int v13; // r15d
  char v14; // r14
  unsigned int v15; // ebx
  bool v17; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r9
  unsigned int v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a7;
  v9 = a6;
  v24 = 0;
  v21 = 0;
  v20 = 0;
  v13 = 0;
  v14 = 0;
  DestinationString = 0LL;
  if ( a4 < 2 )
    goto LABEL_7;
  if ( a4 <= 3 )
  {
    v17 = (unsigned __int8)sub_140778D60(a2) == 0;
  }
  else
  {
    if ( a4 == 11 )
    {
      if ( !a6 || a7 != 4 )
        return (unsigned int)-1073741811;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
      {
        v24 = 4;
        if ( (int)sub_14077CD90(a1, (_DWORD)a2, a3, 11, (__int64)&v21, (__int64)&v20, (__int64)&v24, 0) < 0
          || v24 != 4
          || v21 != 4 )
        {
          v20 = 0;
        }
        v13 = *v9;
      }
      goto LABEL_7;
    }
    if ( a4 == 9 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v14 = 1;
      ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
      goto LABEL_7;
    }
    if ( a4 <= 15 )
      goto LABEL_7;
    if ( a4 <= 17 || a4 == 29 )
      return (unsigned int)-1073741790;
    v17 = a4 == 37;
  }
  if ( v17 )
    return (unsigned int)-1073741790;
LABEL_7:
  v15 = sub_14076FE20(a1, (_DWORD)a2, a3, a4, a5, (__int64)v9, v8, a8);
  if ( a4 == 11 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    LOBYTE(v19) = (v15 & 0x80000000) == 0;
    sub_14095B658(&DestinationString, v20, v13, v19);
  }
  if ( v14 )
  {
    ExReleaseResourceLite(&stru_140C462A0);
    KeLeaveCriticalRegion();
  }
  return v15;
}
