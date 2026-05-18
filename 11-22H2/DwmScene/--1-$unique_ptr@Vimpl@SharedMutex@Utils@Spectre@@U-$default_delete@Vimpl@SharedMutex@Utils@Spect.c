/*
 * XREFs of ??1?$unique_ptr@Vimpl@SharedMutex@Utils@Spectre@@U?$default_delete@Vimpl@SharedMutex@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800E0D00
 * Callers:
 *     ??1SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0D30 (--1SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1shared_timed_mutex@std@@QEAA@XZ @ 0x1800E0D3C (--1shared_timed_mutex@std@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<Spectre::Utils::SharedMutex::impl>::~unique_ptr<Spectre::Utils::SharedMutex::impl>(
        std::shared_timed_mutex **a1)
{
  std::shared_timed_mutex *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    std::shared_timed_mutex::~shared_timed_mutex(*a1);
    operator delete(v1);
  }
}
