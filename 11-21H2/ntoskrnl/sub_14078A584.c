/*
 * XREFs of sub_14078A584 @ 0x14078A584
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_1406DC724 @ 0x1406DC724 (sub_1406DC724.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_140954BA8 @ 0x140954BA8 (sub_140954BA8.c)
 *     sub_140954D10 @ 0x140954D10 (sub_140954D10.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140955184 @ 0x140955184 (sub_140955184.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 *     sub_1409554B0 @ 0x1409554B0 (sub_1409554B0.c)
 *     sub_14095618C @ 0x14095618C (sub_14095618C.c)
 *     sub_140956298 @ 0x140956298 (sub_140956298.c)
 *     sub_14095644C @ 0x14095644C (sub_14095644C.c)
 * Callees:
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_14078A584(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
