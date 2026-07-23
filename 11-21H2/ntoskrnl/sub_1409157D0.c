/*
 * XREFs of sub_1409157D0 @ 0x1409157D0
 * Callers:
 *     sub_140914D00 @ 0x140914D00 (sub_140914D00.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *sub_1409157D0()
{
  void *v0; // rbx

  _InterlockedIncrement64(&qword_140D3D2C0);
  ++dword_140CE1C54;
  v0 = ExpInterlockedPopEntrySList(&stru_140CE1C40);
  if ( v0
    || (++dword_140CE1C58,
        (v0 = (void *)sub_14042A5E0((unsigned int)dword_140CE1C64, (unsigned int)dword_140CE1C6C)) != 0LL) )
  {
    _InterlockedIncrement64(qword_140D3D2E0);
    memset(v0, 0, 0x138uLL);
  }
  return v0;
}
