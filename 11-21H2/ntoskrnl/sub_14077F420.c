/*
 * XREFs of sub_14077F420 @ 0x14077F420
 * Callers:
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14074382C @ 0x14074382C (sub_14074382C.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14077F934 @ 0x14077F934 (sub_14077F934.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077F420(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, _QWORD *a7, _DWORD *a8)
{
  int v8; // ebx
  unsigned int v11; // r13d
  wchar_t *Pool2; // rdi
  PVOID v13; // r15
  unsigned int v14; // r15d
  wchar_t *v15; // rsi
  int v16; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  int v19; // r15d
  HANDLE v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int64 v24; // rax
  int v25; // r12d
  int v26; // edi
  int v27; // eax
  __int64 v28; // rcx
  HANDLE v29; // rax
  __int64 v30; // rcx
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v32; // [rsp+48h] [rbp-38h]
  HANDLE v33; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v34; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v38; // [rsp+D0h] [rbp+50h] BYREF
  int v39; // [rsp+D8h] [rbp+58h]

  v39 = a4;
  v38 = 0;
  v8 = a4;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v11 = 4;
  Handle = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCE8) == 0 )
  {
    v14 = (a3 & 0x200) != 0 ? 360 : 240;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v14, 1380994640LL);
    if ( !Pool2 )
    {
LABEL_74:
      inited = -1073741801;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v15 = Pool2;
      v16 = sub_14077F934(a1, a2, a3, v8, a6, (__int64)Pool2, v14 >> 1, (__int64)&v38);
      inited = v16;
      if ( v16 != -1073741789 )
        break;
      ExFreePoolWithTag(Pool2, 0);
      v24 = 2LL * v38;
      Pool2 = 0LL;
      if ( v24 > 0xFFFFFFFF )
      {
        inited = -1073741675;
        goto LABEL_19;
      }
      v14 = 2 * v38;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v24, 1380994640LL);
      if ( !Pool2 )
        goto LABEL_74;
      v8 = v39;
    }
    if ( v16 < 0 )
      goto LABEL_19;
    if ( (a3 & 0x100) != 0 )
    {
      v19 = (int)Pool2;
      if ( a1 )
        v30 = *(_QWORD *)(a1 + 224);
      else
        v30 = 0LL;
      inited = sub_140A2CF6C(v30, 0LL, 0x2000000LL, &v33);
      if ( inited < 0 )
        goto LABEL_19;
      v20 = v33;
      goto LABEL_15;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
    if ( inited < 0 )
      goto LABEL_19;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(&stru_140001000, &DestinationString, 1u) )
    {
      v19 = (_DWORD)Pool2 + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = Pool2 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&stru_140002838, &DestinationString, 1u) )
      {
        v11 = 5;
        v19 = (_DWORD)Pool2 + 60;
      }
      else if ( RtlPrefixUnicodeString(&stru_140001050, &DestinationString, 1u) )
      {
        v11 = 14;
        v19 = (_DWORD)Pool2 + 86;
      }
      inited = sub_14078014C(a1, v11, &v34);
      if ( inited < 0 )
        goto LABEL_19;
      v20 = v34;
LABEL_15:
      v34 = v20;
      if ( a1 )
        v21 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v21) = 0;
      v22 = sub_14077FFEC(v21, (_DWORD)v20, v19, 0, a5, (__int64)a7);
      if ( !v22 )
      {
        *a8 = 2;
        goto LABEL_19;
      }
      if ( v22 != -1073741444 )
      {
        if ( v22 != -1073741772 )
        {
LABEL_56:
          inited = v22;
          goto LABEL_19;
        }
        if ( !a6 )
        {
          if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
            inited = -1073741772;
          else
            inited = -1073741810;
          goto LABEL_41;
        }
        if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
        {
          inited = sub_14077F2EC(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
          if ( inited < 0 )
            goto LABEL_41;
        }
        inited = sub_14074382C(a1, a3, &P);
        if ( inited < 0 )
          goto LABEL_19;
        v25 = a5;
        v26 = a5;
        if ( P )
          v26 = 917510;
        v27 = sub_140772AA0(a1);
        if ( v27 == -1073741444 )
        {
          inited = -1073741595;
        }
        else if ( v27 < 0 )
        {
          inited = v27;
        }
        else
        {
          if ( v26 != v25 )
          {
            if ( a1 )
              v28 = *(_QWORD *)(a1 + 224);
            else
              LODWORD(v28) = 0;
            v22 = sub_14077FFEC(v28, (_DWORD)v32, 0, 0, v25, (__int64)a7);
            Pool2 = v15;
            if ( v22 != -1073741444 )
            {
              if ( v22 >= 0 )
                goto LABEL_19;
              goto LABEL_56;
            }
            inited = -1073741772;
            goto LABEL_19;
          }
          v29 = v32;
          v32 = 0LL;
          *a7 = v29;
        }
LABEL_41:
        Pool2 = v15;
        goto LABEL_19;
      }
      inited = -1073741595;
LABEL_19:
      v13 = P;
      goto LABEL_20;
    }
    v13 = P;
  }
  inited = -1073741811;
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  if ( v33 )
    ZwClose(v33);
  if ( v32 )
    ZwClose(v32);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
