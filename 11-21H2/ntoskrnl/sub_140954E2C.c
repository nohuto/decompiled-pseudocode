/*
 * XREFs of sub_140954E2C @ 0x140954E2C
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_140255030 @ 0x140255030 (sub_140255030.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ntoskrnl_19 @ 0x14041DE80 (ntoskrnl_19.c)
 *     sub_14065F5D4 @ 0x14065F5D4 (sub_14065F5D4.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140778D60 @ 0x140778D60 (sub_140778D60.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140A236A4 @ 0x140A236A4 (sub_140A236A4.c)
 */

__int64 __fastcall sub_140954E2C(unsigned __int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, PVOID **P)
{
  PVOID **v6; // r15
  int v9; // ebx
  __int64 v10; // rcx
  int inited; // ebx
  const WCHAR *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  const WCHAR *v14; // rdi
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  unsigned int v18; // [rsp+38h] [rbp-59h]
  int v19; // [rsp+48h] [rbp-49h] BYREF
  int v20; // [rsp+4Ch] [rbp-45h] BYREF
  int v21; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int128 v23; // [rsp+68h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+78h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-9h]
  UNICODE_STRING v26; // [rsp+90h] [rbp-1h] BYREF
  UNICODE_STRING v27; // [rsp+A0h] [rbp+Fh] BYREF
  __int128 v28; // [rsp+B0h] [rbp+1Fh]
  __int64 v29; // [rsp+C0h] [rbp+2Fh]

  v6 = P;
  v19 = 0;
  v21 = 0;
  v20 = 0;
  *(_DWORD *)P = 0;
  P = 0LL;
  DestinationString = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v29 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v9 = sub_14078A1A8(a1, a2, a5, (__int64)&v23);
  if ( v9 >= 0 )
  {
    if ( sub_14078A600(2u) )
    {
      v12 = SourceString[0];
      if ( !SourceString[0]
        || *(_QWORD *)((char *)&v23 + 4) != 0x100000000LL
        || HIDWORD(SourceString[1])
        || !a3
        || a4 < 8 )
      {
        goto LABEL_27;
      }
      inited = sub_14077FAC0(v10, SourceString[0]);
      if ( inited < 0 )
        goto LABEL_28;
      if ( sub_140789040(v12) )
      {
LABEL_27:
        inited = -1073741811;
        goto LABEL_28;
      }
      inited = sub_140779DC4((__int64 **)&P);
      if ( inited >= 0 )
      {
        if ( (int)sub_14078A470(*(__int64 *)&qword_140D00AC0, v12, 0LL, &v19, &v21, &v20, v18) >= 0 && (v19 & 2) != 0 )
        {
          if ( (v19 & 0x2001) == 1 )
          {
            inited = -1073741808;
            goto LABEL_28;
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_28;
          sub_14077572C(3);
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
          sub_14076B554((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = sub_140A236A4(qword_140D00AC0);
          ExReleaseResourceLite(&stru_140C462A0);
          sub_1402F9540((__int64)KeGetCurrentThread());
          sub_140775698(3);
          if ( inited < 0 )
            goto LABEL_28;
          v14 = SourceString[0];
          if ( RtlInitUnicodeStringEx(&v27, SourceString[0]) >= 0 )
          {
            *(_QWORD *)&v28 = 0x4000000000001LL;
            ntoskrnl_19(14LL, (__int64)&v27);
          }
        }
        else
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_28;
          sub_14077572C(3);
          v15 = KeGetCurrentThread();
          --*((_WORD *)v15 + 242);
          ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
          sub_14076B554((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = sub_140A236A4(qword_140D00AC0);
          ExReleaseResourceLite(&stru_140C462A0);
          sub_1402F9540((__int64)KeGetCurrentThread());
          sub_140775698(3);
          if ( inited < 0 )
            goto LABEL_28;
          v14 = SourceString[0];
          if ( sub_140778D60(SourceString[0]) && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
            sub_14065F5D4((__int64)&DestinationString, 8, v16, 1, 0LL);
        }
        if ( RtlInitUnicodeStringEx(&v26, v14) >= 0 )
          sub_140255030(&v26.Length);
      }
    }
    else
    {
      inited = -1073741790;
    }
LABEL_28:
    v9 = sub_14078A584(inited, v25, a3, a4, v6);
  }
  sub_1406BACAC((__int64)&v23);
  if ( P )
    sub_140779A50(P);
  return (unsigned int)v9;
}
