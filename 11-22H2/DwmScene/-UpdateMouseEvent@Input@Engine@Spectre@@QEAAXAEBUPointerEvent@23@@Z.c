/*
 * XREFs of ?UpdateMouseEvent@Input@Engine@Spectre@@QEAAXAEBUPointerEvent@23@@Z @ 0x180074844
 * Callers:
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 */

void __fastcall Spectre::Engine::Input::UpdateMouseEvent(
        Spectre::Engine::Input *this,
        const struct Spectre::Engine::PointerEvent *a2)
{
  volatile __int32 *v3; // rax
  __int32 v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rcx
  _DWORD *v7; // rax
  int v8; // edx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v9) = 1;
  std::_Atomic_reinterpret_as<long,long>((unsigned int *)&v9);
  v3 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>((__int64)this + 48);
  while ( _InterlockedExchange(v3, v4) )
    ;
  *(_OWORD *)this = *(_OWORD *)v5;
  *((_DWORD *)this + 4) = *(_DWORD *)(v5 + 16);
  v6 = *std::chrono::steady_clock::now(&v9);
  LODWORD(v9) = 0;
  *((_QWORD *)this + 10) = v6;
  std::_Atomic_reinterpret_as<int,long>((unsigned int *)&v9);
  v7 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>((__int64)this + 48);
  *v7 = v8;
}
