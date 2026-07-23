/*
 * XREFs of MiInitializeRelocations @ 0x140B70C98
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 */

__int64 MiInitializeRelocations()
{
  PVOID Pool; // rax
  PVOID v1; // rax
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rcx
  int v4; // edi
  PVOID v5; // rax
  unsigned __int64 v6; // rcx
  PVOID v7; // rax
  __int64 result; // rax

  Pool = MiAllocatePool(256, 0x10000uLL, 0x69526D4Du);
  if ( Pool )
  {
    qword_140C65748 = 0x7FFFFLL;
    qword_140C65750 = (__int64)Pool;
    qword_140C65758 = ExGenRandom(1) & 0x7FFFE;
    v1 = MiAllocatePool(256, 0x500uLL, 0x69526D4Du);
    if ( v1 )
    {
      qword_140C657E0 = (__int64)v1;
      qword_140C657D8 = 10240LL;
      qword_140C657E8 = (unsigned int)ExGenRandom(1) % 0x2800uLL;
      v2 = &unk_140C65790;
      v3 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
      qword_140C65760 = v3 + 2013265920;
      qword_140C65768 = v3 + 2013265920;
      qword_140C65770 = v3 + 3758096384u;
      v4 = 0;
      qword_140C65778 = v3 + 3758096384u;
      while ( 1 )
      {
        v5 = MiAllocatePool(256, 0x500uLL, 0x69526D4Du);
        if ( !v5 )
          break;
        *(v2 - 2) = 10240LL;
        *(v2 - 1) = v5;
        ++v4;
        v6 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
        *v2 = v6 + 2013265920;
        v2[1] = v6 + 2013265920;
        v2[2] = v6 + 3758096384u;
        v2[3] = v6 + 3758096384u;
        v2 += 8;
        if ( v4 )
        {
          qword_140C657C0 = (unsigned __int8)ExGenRandom(1);
          v7 = MiAllocatePool(256, 0x500uLL, 0x69526D4Du);
          if ( !v7 )
            return 0LL;
          qword_140C657D0 = (__int64)v7;
          result = 1LL;
          qword_140C657C8 = 10240LL;
          return result;
        }
      }
    }
  }
  return 0LL;
}
