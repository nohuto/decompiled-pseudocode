/*
 * XREFs of sub_140827F54 @ 0x140827F54
 * Callers:
 *     sub_140827E8C @ 0x140827E8C (sub_140827E8C.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 *     sub_140A236A4 @ 0x140A236A4 (sub_140A236A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140827F54()
{
  PVOID *v0; // rbx
  char v1; // si
  int v2; // edi
  const WCHAR *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  unsigned int v7; // [rsp+30h] [rbp-20h]
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  PVOID v12; // [rsp+98h] [rbp+48h] BYREF

  v12 = 0LL;
  v9 = 0;
  v0 = P;
  LODWORD(v11) = 0;
  v1 = 0;
  LODWORD(v10) = 0;
  P[1] = P;
  P[0] = P;
  if ( (dword_140D3B050 & 2) != 0 )
  {
    v2 = sub_140764CE4((__int64)qword_140C46278, (__int64)sub_14084F060, (__int64)P);
    if ( v2 < 0 )
      goto LABEL_18;
    v0 = (PVOID *)P[0];
    if ( P[0] != P )
    {
      v2 = sub_140779DC4((__int64 **)&v12);
      if ( v2 >= 0 )
      {
        for ( i = (const WCHAR *)P[0]; i != (const WCHAR *)P; i = *(const WCHAR **)i )
        {
          if ( (int)sub_14078A470(*(__int64 *)&qword_140D00AC0, *((const WCHAR **)i + 3), 0LL, &v9, &v11, &v10, v7) < 0
            || (v9 & 2) == 0 )
          {
            sub_14077572C(3);
            CurrentThread = KeGetCurrentThread();
            --*((_WORD *)CurrentThread + 242);
            ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
            sub_14076B554((__int64)(i + 8), 0LL, 0LL, 1);
            if ( (int)sub_140A236A4(qword_140D00AC0) >= 0 )
              v1 = 1;
            ExReleaseResourceLite(&stru_140C462A0);
            sub_1402F9540((__int64)KeGetCurrentThread());
            sub_140775698(3);
          }
        }
        sub_140779A50((PVOID **)v12);
        if ( v1 )
          sub_1402DCF44(*((PVOID *)qword_140C46278 + 4), 8, 0, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_18;
    }
  }
  else
  {
    v2 = 0;
  }
  while ( v0 != P )
  {
    if ( v0[1] != P || (v6 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v6[1] = P;
    RtlFreeUnicodeString((PUNICODE_STRING)v0 + 1);
    ExFreePoolWithTag(v0, 0);
LABEL_18:
    v0 = (PVOID *)P[0];
  }
  return (unsigned int)v2;
}
