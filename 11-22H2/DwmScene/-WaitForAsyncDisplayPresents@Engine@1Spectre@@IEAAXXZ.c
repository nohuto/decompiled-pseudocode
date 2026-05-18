/*
 * XREFs of ?WaitForAsyncDisplayPresents@Engine@1Spectre@@IEAAXXZ @ 0x180037E8C
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?GetRenderingMode@Display@Engine@Spectre@@QEBA?AW4RenderingMode@123@XZ @ 0x1800579BC (-GetRenderingMode@Display@Engine@Spectre@@QEBA-AW4RenderingMode@123@XZ.c)
 *     ?WaitForPresent@Display@Engine@Spectre@@QEAAXXZ @ 0x1800583DC (-WaitForPresent@Display@Engine@Spectre@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::Engine::WaitForAsyncDisplayPresents(Spectre::Engine::Engine *this)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx

  v1 = (__int64 ***)*((_QWORD *)this + 21);
  for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
  {
    if ( (unsigned int)Spectre::Engine::Display::GetRenderingMode(i[2]) == 1 )
      Spectre::Engine::Display::WaitForPresent((Spectre::Engine::Display *)i[2]);
  }
}
