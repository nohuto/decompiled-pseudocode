/*
 * XREFs of KiConfigureProcessorBlock @ 0x140A59D28
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A69470 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     KiGetSubNodeForGroup @ 0x14024C360 (KiGetSubNodeForGroup.c)
 */

__int64 __fastcall KiConfigureProcessorBlock(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ecx
  __int64 v3; // rbp
  unsigned __int64 v4; // r9
  unsigned int v5; // r11d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned int v8; // edx
  __int64 result; // rax
  __int64 *v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // r10

  v1 = *(_QWORD *)(a1 + 192);
  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = *(unsigned __int16 *)(v1 + 138);
  v4 = *(_QWORD *)(v1 + 128) | (1LL << (v2 & 0x3F));
  v5 = v2 >> 6;
  _BitScanForward64(&v6, v4);
  _BitScanReverse64(&v7, v4);
  *(_BYTE *)(v1 + 108) = v6;
  v8 = v2 >> 6 << 6;
  *(_QWORD *)(v1 + 128) = v4;
  *(_DWORD *)(v1 + 176) = KiProcessorNumberToIndexMappingTable[v8 + (unsigned int)v6];
  *(_DWORD *)(v1 + 180) = KiProcessorNumberToIndexMappingTable[v8 + (unsigned int)v7];
  result = v4 - 1;
  if ( ((v4 - 1) & v4) == 0 )
  {
    v10 = KeNodeBlock;
    v11 = KeNodeBlock[v3];
    v12 = *(_DWORD *)(v11 + 16);
    if ( !v12 )
      *(_BYTE *)(v11 + 12) = v5;
    v13 = (unsigned __int16)KeNumberNodes;
    v14 = v12;
    result = v5;
    v15 = 0;
    *(_DWORD *)(v11 + 16) = v14 | (1 << v5);
    if ( v13 )
    {
      v16 = 0LL;
      do
      {
        if ( v15 != (_DWORD)v3 )
        {
          result = KiGetSubNodeForGroup(*v10, v5);
          if ( result )
          {
            *(_QWORD *)(result + 144) |= 1LL << v3;
            result = *(_QWORD *)(v1 + 144) | (1LL << v16);
            *(_QWORD *)(v1 + 144) = result;
          }
        }
        ++v15;
        ++v16;
        ++v10;
      }
      while ( v15 < v13 );
    }
  }
  return result;
}
