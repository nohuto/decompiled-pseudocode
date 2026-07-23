/*
 * XREFs of sub_1403D59D4 @ 0x1403D59D4
 * Callers:
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_14050850C @ 0x14050850C (sub_14050850C.c)
 * Callees:
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_1403B0D74 @ 0x1403B0D74 (sub_1403B0D74.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1403D59D4(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r10

  v4 = 0;
  v6 = sub_1402520D4(a2);
  if ( v6 )
  {
    v7 = v6[5];
    *(_OWORD *)v7 = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a3 + 32);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(a3 + 48);
    v8 = sub_1403B0D74(a1, *(_DWORD *)(a3 + 48));
    *(_DWORD *)(*(_QWORD *)(v9 + 40) + v10 + 52) = v8;
    *(_BYTE *)(*(_QWORD *)(v9 + 48) + 16 * v11 + 12) = 1;
  }
  else
  {
    sub_14051E038(a1, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3337);
    return (unsigned int)-1073741811;
  }
  return v4;
}
