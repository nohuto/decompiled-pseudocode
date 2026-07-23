/*
 * XREFs of sub_140B10F48 @ 0x140B10F48
 * Callers:
 *     sub_140B10CAC @ 0x140B10CAC (sub_140B10CAC.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14082ED84 @ 0x14082ED84 (sub_14082ED84.c)
 *     sub_140B1236C @ 0x140B1236C (sub_140B1236C.c)
 *     sub_140B123CC @ 0x140B123CC (sub_140B123CC.c)
 */

__int64 __fastcall sub_140B10F48(int a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  bool v7; // zf
  __int64 v8; // rbx
  int v9; // ecx
  bool v10; // cl
  __int64 v11; // rdx
  _QWORD v12[14]; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v13; // [rsp+C0h] [rbp+67h] BYREF

  result = (__int64)memset(v12, 0, 0x68uLL);
  v13 = 0;
  v5 = (_QWORD *)(a2 + 16);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v8 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    if ( (*(_DWORD *)(v8 + 104) & 0x4000000) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 228);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          v10 = (*(_DWORD *)(v8 + 228) & 2) != 0;
          goto LABEL_11;
        }
        if ( a1 == 2 )
        {
          v10 = (v9 & 3) == 0;
LABEL_11:
          if ( v10 )
          {
            v13 = 0;
            LODWORD(v12[0]) = 0;
            *(_OWORD *)&v12[1] = *(_OWORD *)(v8 + 72);
            HIDWORD(v12[0]) = *(_DWORD *)(v8 + 224) & 1;
            LODWORD(v12[11]) = *(_DWORD *)(v8 + 208);
            LODWORD(v12[12]) = *(_DWORD *)(v8 + 216);
            v12[9] = *(_QWORD *)(v8 + 192);
            HIDWORD(v12[11]) = *(_DWORD *)(v8 + 212);
            HIDWORD(v12[12]) = *(_DWORD *)(v8 + 220);
            v12[10] = *(_QWORD *)(v8 + 200);
            v12[4] = &word_140B33460;
            v12[3] = 0x20000LL;
            *(_OWORD *)&v12[7] = *(_OWORD *)(v8 + 176);
            *(_OWORD *)&v12[5] = *(_OWORD *)(v8 + 160);
            sub_140B123CC(v12, &v13);
            LOBYTE(v11) = a1 != 1;
            result = sub_140B1236C(v13, v11);
            v7 = (_BYTE)result == 0;
            goto LABEL_3;
          }
        }
      }
      else
      {
        v7 = (v9 & 1) == 0;
LABEL_3:
        if ( !v7 )
          result = sub_14082ED84(v8, (__int64)v5);
      }
    }
  }
  return result;
}
