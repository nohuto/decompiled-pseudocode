/*
 * XREFs of sub_14099E598 @ 0x14099E598
 * Callers:
 *     sub_14099E6B8 @ 0x14099E6B8 (sub_14099E6B8.c)
 * Callees:
 *     sub_14085475C @ 0x14085475C (sub_14085475C.c)
 *     sub_140989650 @ 0x140989650 (sub_140989650.c)
 *     sub_140990C30 @ 0x140990C30 (sub_140990C30.c)
 */

__int64 __fastcall sub_14099E598(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r8

  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  v4 = sub_14085475C(a1, (UNICODE_STRING *)(a2 + 48));
  if ( v4 >= 0 )
  {
    v5 = sub_140990C30(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyHardwareID, a2 + 64);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 != -1073741772 )
        return (unsigned int)v4;
    }
    else
    {
      v6 = 0;
      v7 = *(unsigned __int16 *)(a2 + 64) >> 1;
      if ( v7 > 2 )
      {
        do
        {
          v8 = *(_QWORD *)(a2 + 72);
          if ( !*(_WORD *)(v8 + 2LL * v6) )
            *(_WORD *)(v8 + 2LL * v6) = 44;
          ++v6;
        }
        while ( v6 + 2 < v7 );
      }
    }
    v4 = sub_140990C30(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyClassName, a2 + 80);
    if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741772 )
    {
      v4 = sub_140990C30(*(PDEVICE_OBJECT *)(a1 + 32), DevicePropertyClassGuid, a2 + 96);
      if ( ((v4 + 0x80000000) & 0x80000000) != 0 || v4 == -1073741772 )
      {
        v4 = sub_140989650((unsigned __int16 *)(a1 + 40), a2 + 112);
        if ( v4 >= 0 )
        {
          v4 = sub_140989650((unsigned __int16 *)(a1 + 56), a2 + 128);
          if ( v4 >= 0 )
            return 0;
        }
      }
    }
  }
  return (unsigned int)v4;
}
