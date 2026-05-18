/*
 * XREFs of ?FrameTick@PerformanceManager@Engine@Spectre@@QEAAXXZ @ 0x18007099C
 * Callers:
 *     ?UpdateStatistics@Engine@1Spectre@@IEAAXXZ @ 0x180037D40 (-UpdateStatistics@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??4?$atomic@_J@std@@QEAA_J_J@Z @ 0x180070978 (--4-$atomic@_J@std@@QEAA_J_J@Z.c)
 *     ??B?$atomic@_J@std@@QEBA_JXZ @ 0x180070990 (--B-$atomic@_J@std@@QEBA_JXZ.c)
 */

void __fastcall Spectre::Engine::PerformanceManager::FrameTick(Spectre::Engine::PerformanceManager *this)
{
  char *v1; // r9
  char *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r9
  char *v7; // r11
  __int64 v8; // r10

  v1 = (char *)this + 160;
  do
  {
    v2 = v1;
    do
    {
      v3 = std::atomic<__int64>::operator __int64();
      *v4 += v3;
      *(v4 - 1) = v3;
      v5 = v4[1];
      if ( v5 < v3 )
        v5 = v3;
      v4[1] = v5;
      std::atomic<__int64>::operator=();
    }
    while ( v8 + 16 != v6 );
    v1 = (char *)(v6 + 160);
  }
  while ( v2 != v7 );
}
