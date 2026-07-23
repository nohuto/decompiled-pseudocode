/*
 * XREFs of sub_1406640F0 @ 0x1406640F0
 * Callers:
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 * Callees:
 *     sub_140663FAC @ 0x140663FAC (sub_140663FAC.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7B20 @ 0x1407A7B20 (sub_1407A7B20.c)
 *     sub_1407AD8F0 @ 0x1407AD8F0 (sub_1407AD8F0.c)
 *     sub_1407F58C4 @ 0x1407F58C4 (sub_1407F58C4.c)
 */

__int64 __fastcall sub_1406640F0(__int64 *a1, __int64 a2, _WORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // eax
  int v11; // esi
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // r14
  unsigned int v15; // eax
  ULONG_PTR v16; // rcx
  ULONG_PTR v18; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]

  v8 = a2;
  LOBYTE(a2) = *((_BYTE *)KeGetCurrentThread() + 562);
  v18 = 0LL;
  v9 = *a1;
  v10 = sub_1407AD8F0((int)a1, a2, (int)&v18, 0, 0LL);
  v11 = v10;
  if ( !v10 )
  {
    if ( a4 )
    {
      LODWORD(v20) = 0;
      v11 = sub_140663FAC(v9, a4, (__int64)v19);
      if ( v11 < 0 )
      {
        v16 = v18;
LABEL_17:
        sub_1407A7628(v16);
        return (unsigned int)v11;
      }
      *(_QWORD *)(a5 + 40) = v20;
    }
    v12 = v18;
    if ( a6 )
    {
      v13 = *(_QWORD *)(v18 + 144);
      if ( v13 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 40LL);
      }
    }
    if ( v8 )
    {
      v14 = 0;
      v15 = *(unsigned __int16 *)(v12 + 240);
      if ( *(_DWORD *)a3 < v15 )
      {
        v14 = *(_WORD *)(v12 + 240);
        *(_WORD *)(v12 + 240) = *a3;
      }
      else
      {
        *(_DWORD *)a3 = v15;
      }
      if ( *(_QWORD *)(v12 + 176) )
        sub_1407F58C4(v12, v8);
      else
        sub_1407A7B20(v12, v8);
      if ( v14 )
        *(_WORD *)(v12 + 240) = v14;
    }
    v16 = v12;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(v9 + 416) & 0x10) != 0 || v10 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)v11;
}
