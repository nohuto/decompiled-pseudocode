/*
 * XREFs of sub_1406B9BC0 @ 0x1406B9BC0
 * Callers:
 *     sub_1406B9F74 @ 0x1406B9F74 (sub_1406B9F74.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 * Callees:
 *     sub_14024011C @ 0x14024011C (sub_14024011C.c)
 *     sub_14024013C @ 0x14024013C (sub_14024013C.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     sub_1406B9B78 @ 0x1406B9B78 (sub_1406B9B78.c)
 *     sub_1406B9DC4 @ 0x1406B9DC4 (sub_1406B9DC4.c)
 *     sub_1406BA6C4 @ 0x1406BA6C4 (sub_1406BA6C4.c)
 *     sub_1409342B0 @ 0x1409342B0 (sub_1409342B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406B9BC0(unsigned __int16 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int v8; // edi
  unsigned __int16 *v9; // rax
  __int64 v10; // r9
  _WORD *v11; // rbx
  _WORD *v12; // r9
  __int16 v13; // dx
  __int64 Pool2; // rax
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-50h]
  __int16 v18; // [rsp+50h] [rbp-20h] BYREF
  _WORD *v19; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-10h] BYREF

  v8 = 0;
  v9 = (unsigned __int16 *)sub_1406BA6C4(a4, a1);
  v11 = v9;
  if ( v9 )
  {
    *v9 = a1;
    sub_1406B9B78((__int64)v9);
  }
  else
  {
    v11 = (_WORD *)sub_14024011C(v10);
    v19 = v11;
    v11[1] |= 1u;
    *v11 = v13;
    if ( v12 == v11 )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        v16 = (unsigned __int16)(v12[8] + 2);
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.Buffer = 0LL;
        v18 = 0;
        v8 = sub_1409342B0(a2, &Destination, v16, &v18);
        if ( v8 >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, &word_140865B20);
          RtlAppendUnicodeStringToString(&Destination, a4 + 1);
          v8 = sub_1406B9A14((PIRP)a3, a4, a1, &Destination, v18, a4->MaximumLength);
          ExFreePoolWithTag(Destination.Buffer, 0);
          if ( v8 < 0 )
            return (unsigned int)v8;
          sub_14024013C(*(struct _ECP_LIST **)(a3 + 112), (PVOID *)&v19);
          v11 = v19;
        }
      }
    }
  }
  Pool2 = ExAllocatePool2(256LL, *(unsigned __int16 *)(a2 + 88) + 32LL, 1767075657LL);
  *((_QWORD *)v11 + 1) = Pool2;
  if ( Pool2 )
  {
    LOWORD(v17) = 0;
    sub_1406B9DC4(
      Pool2,
      (unsigned int)*(unsigned __int16 *)(a2 + 88) + 32,
      *(_QWORD *)(a2 + 96),
      *(unsigned __int16 *)(a2 + 88),
      v17,
      0LL,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
