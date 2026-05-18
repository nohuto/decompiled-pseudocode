/*
 * XREFs of ??1shared_timed_mutex@std@@QEAA@XZ @ 0x1800E0D3C
 * Callers:
 *     ??1?$unique_ptr@Vimpl@SharedMutex@Utils@Spectre@@U?$default_delete@Vimpl@SharedMutex@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800E0D00 (--1-$unique_ptr@Vimpl@SharedMutex@Utils@Spectre@@U-$default_delete@Vimpl@SharedMutex@Utils@Spect.c)
 * Callees:
 *     <none>
 */

void __fastcall std::shared_timed_mutex::~shared_timed_mutex(std::shared_timed_mutex *this)
{
  _Cnd_destroy_in_situ((std::shared_timed_mutex *)((char *)this + 152));
  _Cnd_destroy_in_situ((std::shared_timed_mutex *)((char *)this + 80));
  _Mtx_destroy_in_situ(this);
}
