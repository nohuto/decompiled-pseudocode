/*
 * XREFs of sub_140746CCC @ 0x140746CCC
 * Callers:
 *     sub_1407448BC @ 0x1407448BC (sub_1407448BC.c)
 *     sub_140744E30 @ 0x140744E30 (sub_140744E30.c)
 *     sub_140745620 @ 0x140745620 (sub_140745620.c)
 *     sub_1407456F8 @ 0x1407456F8 (sub_1407456F8.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_140746270 @ 0x140746270 (sub_140746270.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 * Callees:
 *     sub_1402D19D8 @ 0x1402D19D8 (sub_1402D19D8.c)
 *     sub_1402D19FC @ 0x1402D19FC (sub_1402D19FC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140746CCC(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int v6; // ebx
  void *Pool2; // rdi
  int v8; // r15d
  int *v9; // rsi
  int v10; // eax
  __int64 v11; // r14
  UNICODE_STRING *v12; // r12
  unsigned int MaximumLength; // ecx
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // ecx
  int v19; // eax
  SIZE_T v20; // rdx
  int v21; // r8d
  wchar_t *v22; // rax
  wchar_t *Buffer; // rdx
  __int64 v24; // rax
  void *v25; // rax
  size_t Size; // [rsp+68h] [rbp-19h] BYREF
  int v27; // [rsp+70h] [rbp-11h]
  HANDLE Handle; // [rsp+78h] [rbp-9h] BYREF
  __int64 v29; // [rsp+80h] [rbp-1h]
  unsigned int v30; // [rsp+D8h] [rbp+57h]

  v29 = *(_QWORD *)&qword_140D00AC0;
  v6 = 0;
  Handle = 0LL;
  Pool2 = 0LL;
  v8 = 0;
  Size = 0x100000000LL;
  if ( !a4 )
  {
    v6 = sub_14077C924(qword_140D00AC0, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( v6 < 0 )
      goto LABEL_23;
  }
  v27 = 0;
  if ( !a6 )
    goto LABEL_23;
  v9 = (int *)(a5 + 8);
  while ( 2 )
  {
    v10 = v9[5];
    v11 = *((_QWORD *)v9 + 1);
    if ( (v10 & 4) != 0 )
    {
      v12 = (UNICODE_STRING *)*((_QWORD *)v9 + 1);
      v11 = *(_QWORD *)(v11 + 8);
      MaximumLength = v12->MaximumLength;
    }
    else
    {
      MaximumLength = v9[4];
      v12 = 0LL;
    }
    v30 = MaximumLength;
    if ( (v10 & 2) != 0 )
    {
      if ( Pool2 || (v8 = 260, (Pool2 = (void *)ExAllocatePool2(256LL, 260LL, 1667526736LL)) != 0LL) )
      {
        v11 = (__int64)Pool2;
        goto LABEL_9;
      }
LABEL_78:
      v6 = -1073741670;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v14 = (int)Handle;
      if ( a4 )
        v14 = a4;
      v15 = sub_14077DA5C(
              v29,
              a2,
              a3,
              v14,
              0LL,
              *((_QWORD *)v9 - 1),
              (__int64)&Size + 4,
              v11,
              MaximumLength,
              (__int64)&Size,
              0);
      v6 = v15;
      if ( v15 != -1073741789 )
      {
        if ( v15 == -1073741670 )
          goto LABEL_21;
        v16 = v8;
        if ( v15 < 0 )
          goto LABEL_15;
        v19 = HIDWORD(Size);
        v20 = (unsigned int)Size;
        if ( !HIDWORD(Size) )
        {
          *v9 = 0;
          goto LABEL_37;
        }
        v21 = *v9;
        if ( HIDWORD(Size) == *v9 )
        {
          if ( v21 != 18 || HIDWORD(Size) != 25 )
            goto LABEL_30;
        }
        else if ( v21 != 18 || HIDWORD(Size) != 25 )
        {
          goto LABEL_70;
        }
        *v9 = 25;
LABEL_30:
        if ( v19 != 18 && v19 != 20 && v19 != 25 )
        {
          if ( v19 == 8210 )
          {
            if ( !sub_1402D19FC((_WORD *)v11, v20) )
              v6 = -1073741823;
            if ( v6 < 0 )
              goto LABEL_15;
          }
LABEL_37:
          v8 = v16;
          if ( v12 && (unsigned int)v20 > 0xFFFE )
          {
            v6 = -2147483643;
LABEL_15:
            v17 = v30;
            goto LABEL_16;
          }
          if ( (v9[5] & 2) == 0 )
          {
            if ( !v12 )
            {
LABEL_40:
              if ( (v9[5] & 2) != 0 )
              {
                **((_QWORD **)v9 + 1) = v11;
                LODWORD(v20) = Size;
              }
              v9[4] = v20;
LABEL_43:
              v17 = v30;
              goto LABEL_16;
            }
LABEL_47:
            v12->Length = v20;
            if ( HIDWORD(Size) != 8210 )
            {
              Buffer = v12->Buffer;
              if ( Buffer )
              {
                if ( (unsigned __int16)Size >= 2u && !Buffer[((unsigned __int64)(unsigned __int16)Size >> 1) - 1] )
                  v12->Length = Size - 2;
              }
            }
            goto LABEL_43;
          }
          if ( v12 )
          {
            v22 = (wchar_t *)sub_1406BE560(v20);
            v12->Buffer = v22;
            if ( v22 )
            {
              v12->MaximumLength = Size;
              memmove(v22, Pool2, (unsigned int)Size);
              LOWORD(v20) = Size;
              goto LABEL_47;
            }
          }
          else
          {
            v25 = (void *)ExAllocatePool2(256LL, v20, 1667526736LL);
            v11 = (__int64)v25;
            if ( v25 )
            {
              memmove(v25, Pool2, (unsigned int)Size);
              LODWORD(v20) = Size;
              goto LABEL_40;
            }
          }
          v6 = -1073741670;
          goto LABEL_21;
        }
        if ( sub_1402D19D8(v11, v20) )
          goto LABEL_37;
LABEL_70:
        v6 = -1073741823;
        goto LABEL_15;
      }
      v17 = v30;
      if ( (v9[5] & 2) == 0 )
        goto LABEL_16;
      if ( (unsigned int)Size <= v30 )
        break;
      ExFreePoolWithTag(Pool2, 0);
      v8 = Size;
      v24 = ExAllocatePool2(256LL, (unsigned int)Size, 1667526736LL);
      Pool2 = (void *)v24;
      if ( !v24 )
        goto LABEL_78;
      v11 = v24;
LABEL_9:
      MaximumLength = v8;
      v30 = v8;
    }
    v6 = -1073741595;
LABEL_16:
    v9[6] = v6;
    if ( v6 >= 0 )
    {
LABEL_20:
      v9 += 10;
      if ( ++v27 < a6 )
        continue;
    }
    else
    {
      if ( (v9[5] & 8) != 0 )
      {
        if ( v12 )
        {
          RtlInitUnicodeString(v12, 0LL);
        }
        else if ( v11 )
        {
          memset((void *)v11, 0, v17);
        }
      }
      if ( (v9[5] & 1) == 0 )
      {
        v6 = 0;
        goto LABEL_20;
      }
    }
    break;
  }
LABEL_21:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
