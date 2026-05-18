/*
 * XREFs of ??$make_unique@Vimpl@SharedMutex@Utils@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@Vimpl@SharedMutex@Utils@Spectre@@U?$default_delete@Vimpl@SharedMutex@Utils@Spectre@@@std@@@0@XZ @ 0x1800E0C50
 * Callers:
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Spectre::Utils::SharedMutex::impl,,0>(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)operator new(0xE8uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xE8uLL);
    _Mtx_init_in_situ((_Mtx_t)v3, 2);
    _Cnd_init_in_situ((_Cnd_t)(v3 + 80));
    _Cnd_init_in_situ((_Cnd_t)(v3 + 152));
    *((_DWORD *)v3 + 56) = 0;
    v3[228] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
