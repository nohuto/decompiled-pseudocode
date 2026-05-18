/*
 * XREFs of sub_18002EE38 @ 0x18002EE38
 * Callers:
 *     sub_18002E4C4 @ 0x18002E4C4 (sub_18002E4C4.c)
 *     sub_180062BB4 @ 0x180062BB4 (sub_180062BB4.c)
 * Callees:
 *     sub_18001C7B4 @ 0x18001C7B4 (sub_18001C7B4.c)
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 */

__int64 __fastcall sub_18002EE38(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 i; // rax
  char v18; // cl
  __int64 result; // rax
  __int64 *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  bool v24; // zf
  __int128 v25; // xmm0
  char v26; // cl
  __int128 v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+30h] [rbp-28h]
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    v9 = v4 + 2;
    if ( *(_BYTE *)(v4[1] + 25LL) || (unsigned __int8)sub_18001C7B4((_QWORD *)(*v9 + 32LL), a4) )
    {
      *(_QWORD *)a2 = *v9;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_36:
      *(_DWORD *)(a2 + 8) = 0;
      return a2;
    }
    goto LABEL_29;
  }
  v10 = (_QWORD *)(a3 + 32);
  v11 = (_QWORD *)(a3 + 32);
  if ( a3 == *v4 )
  {
    if ( (unsigned __int8)sub_18001C7B4(a4, v11) )
    {
      *(_QWORD *)a2 = a3;
      *(_DWORD *)(a2 + 8) = 1;
      *(_BYTE *)(a2 + 16) = 0;
      return a2;
    }
    goto LABEL_29;
  }
  if ( (unsigned __int8)sub_18001C7B4(a4, v11) )
  {
    v12 = *(_QWORD *)a3;
    v13 = a3;
    if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
    {
      v12 = *(_QWORD *)(a3 + 8);
      v14 = a3;
      if ( !*(_BYTE *)(v12 + 25) )
      {
        v15 = a3;
        v16 = a3;
        do
        {
          v14 = v16;
          if ( v15 != *(_QWORD *)v12 )
            break;
          v13 = v12;
          v12 = *(_QWORD *)(v12 + 8);
          v15 = v13;
          v16 = v13;
          v14 = v13;
        }
        while ( !*(_BYTE *)(v12 + 25) );
      }
      if ( *(_BYTE *)(v13 + 25) )
        v12 = v14;
    }
    else
    {
      for ( i = *(_QWORD *)(v12 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
        v12 = i;
    }
    if ( !(unsigned __int8)sub_18001C7B4((_QWORD *)(v12 + 32), a4) )
      goto LABEL_29;
    v18 = *(_BYTE *)(*(_QWORD *)(v12 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v18 )
    {
      *(_QWORD *)a2 = v12;
LABEL_23:
      *(_DWORD *)(a2 + 8) = 0;
      return result;
    }
    *(_QWORD *)a2 = a3;
    goto LABEL_25;
  }
  if ( !(unsigned __int8)sub_18001C7B4(v10, a4) )
  {
    *(_QWORD *)a2 = a3;
    *(_BYTE *)(a2 + 16) = 1;
    goto LABEL_36;
  }
  v29 = a3;
  v20 = sub_18001D3F8(&v29);
  v21 = *v20;
  if ( *(_BYTE *)(*v20 + 25) || (unsigned __int8)sub_18001C7B4(a4, (_QWORD *)(v21 + 32)) )
  {
    v26 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v26 )
    {
      *(_QWORD *)a2 = a3;
      goto LABEL_23;
    }
    *(_QWORD *)a2 = v21;
LABEL_25:
    *(_DWORD *)(a2 + 8) = 1;
    return result;
  }
LABEL_29:
  sub_18001CAA0(a1, (__int64)&v27, a4);
  v22 = v28;
  v24 = !sub_18001CB40(v23, v28, a4);
  result = a2;
  if ( v24 )
  {
    v25 = v27;
    *(_BYTE *)(a2 + 16) = 0;
    *(_OWORD *)a2 = v25;
  }
  else
  {
    *(_QWORD *)a2 = v22;
    *(_DWORD *)(a2 + 8) = 2;
    *(_BYTE *)(a2 + 16) = 1;
  }
  return result;
}
