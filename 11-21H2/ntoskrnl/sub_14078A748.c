/*
 * XREFs of sub_14078A748 @ 0x14078A748
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E04F4 @ 0x1402E04F4 (sub_1402E04F4.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_1407754E4 @ 0x1407754E4 (sub_1407754E4.c)
 *     sub_14077C780 @ 0x14077C780 (sub_14077C780.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_140788ED4 @ 0x140788ED4 (sub_140788ED4.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078A748(unsigned __int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // edi
  _WORD *Pool2; // rsi
  unsigned int v8; // r12d
  WCHAR *v9; // r15
  __int64 v10; // rcx
  signed int inited; // ebx
  int v12; // r13d
  unsigned int v13; // edi
  NTSTATUS v14; // eax
  signed int v15; // eax
  char *v17; // rax
  unsigned int v18; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  __int128 v20; // [rsp+70h] [rbp-1h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp+Fh]
  __int64 v22; // [rsp+90h] [rbp+1Fh]

  v6 = a4;
  v22 = 0LL;
  Pool2 = 0LL;
  v20 = 0LL;
  v8 = 0;
  v9 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  *a6 = 0;
  DestinationString = 0LL;
  inited = sub_14078A1A8(a1, a2, a5, (__int64)&v20);
  if ( inited < 0 )
    goto LABEL_21;
  if ( !SourceString[0] || *(_QWORD *)((char *)&v20 + 4) != 0x100000000LL || !a3 )
    goto LABEL_38;
  if ( a4 < 0x14 )
  {
    v6 = a4;
LABEL_38:
    inited = -1073741811;
    goto LABEL_27;
  }
  v12 = 2;
  v13 = 0;
  if ( a4 - 20 >= 2 )
    v13 = a4 - 20;
  if ( v13 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v13, 879783504LL);
    if ( !Pool2 )
      inited = -1073741670;
    if ( inited < 0 )
      goto LABEL_26;
  }
  inited = sub_14077FAC0(v10, SourceString[0]);
  if ( inited < 0 )
    goto LABEL_26;
  if ( HIDWORD(SourceString[1]) == 1 )
  {
    v18 = v13 >> 1;
    v14 = sub_140788ED4(*(__int64 *)&qword_140D00AC0, SourceString[0], Pool2, &v18);
    v8 = v18;
    inited = v14;
  }
  else
  {
    if ( HIDWORD(SourceString[1]) != 2 )
    {
      if ( HIDWORD(SourceString[1]) != 3 )
      {
        inited = -1073741811;
        goto LABEL_26;
      }
      if ( sub_140789040(SourceString[0]) )
      {
        inited = -1073741810;
        goto LABEL_26;
      }
      v12 = 3;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
    if ( inited < 0 )
      goto LABEL_26;
    v18 = 400;
    v17 = (char *)ExAllocatePool2(256LL, 400LL, 879783504LL);
    v9 = (WCHAR *)v17;
    if ( !v17 )
    {
      inited = -1073741670;
      goto LABEL_26;
    }
    inited = sub_1407754E4((__int64)&DestinationString, v17, &v18, v12);
    if ( inited < 0 )
    {
LABEL_26:
      v6 = a4;
LABEL_27:
      v15 = sub_14077C780(inited, 2 * v8, 0, 0LL, 0, v22, a3, v6, a6);
      goto LABEL_17;
    }
    inited = sub_1402E04F4(Pool2, v13, v9, 0LL, 0LL, 2048);
    if ( inited == -2147483643 )
      inited = -1073741789;
    v8 = (v18 >> 1) + 1;
  }
  if ( inited < 0 )
    goto LABEL_26;
  v15 = sub_14077C780(inited, 2 * v8, 0, Pool2, 2 * v8, v22, a3, a4, a6);
LABEL_17:
  inited = v15;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x34706E50u);
LABEL_21:
  sub_1406BACAC((__int64)&v20);
  return (unsigned int)inited;
}
