/*
 * XREFs of sub_1402523CC @ 0x1402523CC
 * Callers:
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     sub_140397D10 @ 0x140397D10 (sub_140397D10.c)
 *     sub_1403B6180 @ 0x1403B6180 (sub_1403B6180.c)
 *     sub_1403BD66C @ 0x1403BD66C (sub_1403BD66C.c)
 *     sub_1403D8B80 @ 0x1403D8B80 (sub_1403D8B80.c)
 *     sub_1405091D0 @ 0x1405091D0 (sub_1405091D0.c)
 *     sub_14050A598 @ 0x14050A598 (sub_14050A598.c)
 *     sub_14050A60C @ 0x14050A60C (sub_14050A60C.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1402523CC(unsigned int a1, unsigned int a2)
{
  ULONG_PTR *v2; // r8
  ULONG_PTR *v5; // r11
  _QWORD **v6; // r11
  _QWORD *v7; // r9
  _DWORD *v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // eax

  v2 = (ULONG_PTR *)qword_140C4DE70;
  while ( v2 != &qword_140C4DE70 )
  {
    v5 = v2;
    v2 = (ULONG_PTR *)*v2;
    v6 = (_QWORD **)(v5 + 31);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      v9 = v8[7];
      if ( v9 != -1 )
      {
        if ( v9 >= a1 && v9 < a2 )
          return v8;
        v10 = v8[6] - v8[5] + v9 - 1;
        if ( v10 < a2 && v10 >= a1 )
          return v8;
        if ( v9 < a1 && v10 >= a2 )
          return v8;
      }
    }
  }
  return 0LL;
}
