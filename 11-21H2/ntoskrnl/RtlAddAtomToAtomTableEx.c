/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x1402F1090
 * Callers:
 *     sub_1406BFED0 @ 0x1406BFED0 (sub_1406BFED0.c)
 *     RtlAddAtomToAtomTable @ 0x1406E0820 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     sub_1402F0AA0 @ 0x1402F0AA0 (sub_1402F0AA0.c)
 *     sub_1403547BC @ 0x1403547BC (sub_1403547BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406AB544 @ 0x1406AB544 (sub_1406AB544.c)
 *     sub_1406C5878 @ 0x1406C5878 (sub_1406C5878.c)
 *     sub_1407A09E4 @ 0x1407A09E4 (sub_1407A09E4.c)
 *     RtlGetIntegerAtom @ 0x1407A0DF0 (RtlGetIntegerAtom.c)
 *     sub_1407A0EA0 @ 0x1407A0EA0 (sub_1407A0EA0.c)
 *     sub_1407A0EE0 @ 0x1407A0EE0 (sub_1407A0EE0.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, WCHAR *a2, USHORT *a3, unsigned int a4)
{
  int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  USHORT v15; // ax
  USHORT IntegerAtom[2]; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+44h] [rbp-54h]
  size_t Size; // [rsp+48h] [rbp-50h] BYREF
  __int64 v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v22; // [rsp+60h] [rbp-38h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  LODWORD(Size) = 0;
  IntegerAtom[0] = 0;
  v20 = 0LL;
  if ( (unsigned __int8)sub_1407A0EA0() )
  {
    if ( RtlGetIntegerAtom(a2, IntegerAtom) )
    {
      v15 = IntegerAtom[0];
      if ( IntegerAtom[0] >= 0xC000u )
      {
        v15 = 0;
        IntegerAtom[0] = 0;
        v8 = -1073741811;
        v18 = -1073741811;
      }
      else
      {
        v8 = 0;
        v18 = 0;
      }
      if ( a3 )
        *a3 = v15;
      goto LABEL_27;
    }
    if ( *a2 )
    {
      v8 = sub_1407A0EE0(a1, a2, 0LL, &v22, &Size, &v20, &v21);
      v18 = v8;
      if ( v8 < 0 )
      {
LABEL_27:
        sub_1407A09E4(a1);
        return (unsigned int)v8;
      }
      if ( v21 )
      {
        sub_1402F0AA0(v21, v20);
        if ( a3 )
          *a3 = *(_WORD *)(v9 + 10);
        v8 = 0;
        v18 = 0;
        goto LABEL_27;
      }
      v10 = v22;
      if ( v22 )
      {
        v8 = -1073741801;
        v18 = -1073741801;
        v11 = sub_1403547BC((unsigned int)Size, &v20, a4);
        v12 = v11;
        v21 = v11;
        if ( v11 )
        {
          v13 = (unsigned int)Size;
          memmove((void *)(v11 + 42), a2, (unsigned int)Size);
          v14 = (unsigned __int8)(v13 >> 1);
          *(_BYTE *)(v12 + 40) = v14;
          *(_WORD *)(v12 + 2 * v14 + 42) = 0;
          if ( (unsigned __int8)sub_1406C5878(a1, v12) )
          {
            *(_WORD *)(v12 + 10) = *(_WORD *)(v12 + 8) | 0xC000;
            *v10 = v12;
            if ( a3 )
              *a3 = *(_WORD *)(v12 + 10);
            v8 = 0;
            v18 = 0;
          }
          else
          {
            if ( v20 && v20 != v12 + 16 )
              sub_1406AB544(v20);
            sub_1406AB544(v12);
          }
        }
        goto LABEL_27;
      }
      v8 = -1073741811;
    }
    else
    {
      v8 = -1073741773;
    }
    v18 = v8;
    goto LABEL_27;
  }
  return 3221225485LL;
}
