/*
 * XREFs of RtlUnicodeStringCopy @ 0x18009FD60
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x18009F534 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x18009FE14 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x18009FE80 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(_WORD *a1, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned __int64 v8; // r9
  _WORD *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r10
  __int16 v12; // r11
  __int64 v13; // rbx
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v4 = RtlUnicodeStringValidateDestWorker(a1, &v16, &v15, 0LL);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = RtlUnicodeStringValidateWorker(a2, v5, (unsigned int)v4);
    v6 = v7;
    if ( v7 >= 0 && a2 )
    {
      v9 = (_WORD *)*((_QWORD *)a2 + 1);
      v10 = (unsigned __int64)*a2 >> 1;
    }
    else
    {
      v10 = v8;
      v9 = (_WORD *)v8;
      if ( v7 < 0 )
      {
LABEL_13:
        *a1 = 2 * v8;
        return v6;
      }
    }
    v11 = v15;
    v6 = v8;
    v12 = v8;
    if ( v15 )
    {
      v13 = v16 - (_QWORD)v9;
      while ( v10 )
      {
        --v10;
        *(_WORD *)((char *)v9 + v13) = *v9;
        ++v12;
        ++v9;
        if ( !--v11 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      if ( v10 )
        v6 = -2147483643;
    }
    LOWORD(v8) = v12;
    goto LABEL_13;
  }
  return v6;
}
