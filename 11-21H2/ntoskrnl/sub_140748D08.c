/*
 * XREFs of sub_140748D08 @ 0x140748D08
 * Callers:
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     sub_14081EA70 @ 0x14081EA70 (sub_14081EA70.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_14081FCD8 @ 0x14081FCD8 (sub_14081FCD8.c)
 *     sub_14094524C @ 0x14094524C (sub_14094524C.c)
 *     sub_140946ADC @ 0x140946ADC (sub_140946ADC.c)
 *     sub_14094804C @ 0x14094804C (sub_14094804C.c)
 *     sub_14095813C @ 0x14095813C (sub_14095813C.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 *     sub_140AF8120 @ 0x140AF8120 (sub_140AF8120.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140748D08(_DWORD *a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  __int64 v3; // r10
  unsigned int v4; // ecx
  _DWORD *v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( !a1 )
    return 0LL;
  v2 = a1 + 1;
  result = 4LL;
  if ( *a1 )
  {
    v3 = (unsigned int)*a1;
    do
    {
      v4 = v2[3];
      v5 = v2 + 4;
      v6 = 16;
      if ( v4 )
      {
        v7 = v4;
        do
        {
          v8 = 20LL;
          if ( *(_BYTE *)v5 == 5 )
            v8 = (unsigned int)(v5[1] + 20);
          v6 += v8;
          v5 = (_DWORD *)((char *)v5 + v8);
          --v7;
        }
        while ( v7 );
      }
      result = v6 + (unsigned int)result;
      v2 = (_DWORD *)((char *)v2 + v6);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
