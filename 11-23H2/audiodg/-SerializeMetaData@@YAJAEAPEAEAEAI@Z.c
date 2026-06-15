/*
 * XREFs of ?SerializeMetaData@@YAJAEAPEAEAEAI@Z @ 0x140063368
 * Callers:
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x1400632A8 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 * Callees:
 *     memcpy_s @ 0x14002AC78 (memcpy_s.c)
 */

__int64 __fastcall SerializeMetaData(unsigned __int8 **a1, unsigned int *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = 0;
  v10 = 16777217;
  if ( (unsigned int)v2 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( memcpy_s(&(*a1)[v2], (unsigned int)(4096 - v2), &v10, 4uLL) )
    return (unsigned int)-2147024774;
  v6 = *a2;
  *a2 += 4;
  if ( (unsigned int)(4092 - v6) < 4 )
    return (unsigned int)-2147024774;
  v7 = v6 + 8;
  *a2 = v7;
  if ( 4096 - v7 < 4 )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    v8 = v7 + 4;
    *a2 = v8;
    *(_DWORD *)&(*a1)[v2 + 8] = v8 - v2;
  }
  return v3;
}
