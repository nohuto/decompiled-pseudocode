/*
 * XREFs of sub_1406D1E90 @ 0x1406D1E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024E2C8 @ 0x14024E2C8 (sub_14024E2C8.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_14081CC60 @ 0x14081CC60 (sub_14081CC60.c)
 *     sub_140861CE0 @ 0x140861CE0 (sub_140861CE0.c)
 *     sub_140863B7C @ 0x140863B7C (sub_140863B7C.c)
 */

void sub_1406D1E90()
{
  char v0; // bl
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // edx

  do
  {
    do
    {
      v0 = 0;
      _m_prefetchw(&dword_140CE2140);
      v1 = dword_140CE2140;
      do
      {
        v2 = v1;
        v1 = _InterlockedCompareExchange(&dword_140CE2140, v1, v1);
      }
      while ( v2 != v1 );
      _BitScanForward(&v3, v1);
      v4 = 1 << v3;
      v5 = v1 & ~(1 << v3);
      if ( (v5 & 8) != 0 && ((v4 - 2) & 0xFFFFFFFD) == 0 )
      {
        v0 = 1;
        v5 &= ~8u;
      }
      v6 = v5 & 0xFFFFFFFB;
      if ( v4 != 2 )
        v6 = v5;
    }
    while ( v1 != _InterlockedCompareExchange(&dword_140CE2140, v6, v1) );
    v7 = v4 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 2 )
          continue;
        sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
      }
      else
      {
        sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
        sub_140861CE0();
      }
      sub_14024E2C8(v0);
      sub_1402935D0((ULONG_PTR)&qword_140C1F5C0);
    }
    else
    {
      sub_140863B7C();
      sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
      sub_14081CC60();
      sub_1402935D0((ULONG_PTR)&qword_140C1F5C0);
      ExSubscribeWnfStateChange(
        (unsigned int)&unk_140C1F5B8,
        (unsigned int)&qword_14000EBD8,
        1,
        0,
        (__int64)sub_14099A120,
        0LL);
    }
  }
  while ( v6 );
}
