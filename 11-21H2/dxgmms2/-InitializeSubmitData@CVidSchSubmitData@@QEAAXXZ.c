/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001B878
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C001B5B8 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  __int64 v2; // rbx
  char v3; // di
  PSLIST_ENTRY v4; // r9
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r9d
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax

  v2 = *((_QWORD *)this + 1) + 1280LL;
  v3 = 1;
  ++*(_DWORD *)(v2 + 20);
  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v2);
  if ( !v4 )
  {
    ++*(_DWORD *)(v2 + 24);
    v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v2 + 48))(
                         *(unsigned int *)(v2 + 36),
                         *(unsigned int *)(v2 + 44),
                         *(unsigned int *)(v2 + 40),
                         v2);
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( *(int *)(v5 + 2424) < 0x2000 )
      v6 = 1;
    else
      v6 = *(_DWORD *)(v5 + 288);
    if ( *(int *)(v5 + 2424) >= 0x2000 || *(_BYTE *)(v5 + 2724) )
      v7 = *(_DWORD *)(v5 + 2632) * ((v6 << 6) + ((8 * v6 + 231) & 0xFFFFFFF8)) + 8 * (v6 + 77);
    else
      v7 = 1304;
    memset(v4, 0, v7);
    v8 = *(_QWORD *)this;
    v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( *(int *)(v9 + 2424) < 0x2000 )
      v10 = 1;
    else
      v10 = *(_DWORD *)(v9 + 288);
    v11 = *(_DWORD *)(v9 + 2632);
    if ( *(int *)(v9 + 2424) < 0x2000 && !*(_BYTE *)(v9 + 2724) )
      v3 = 0;
    *(_BYTE *)(v8 + 356) = v3;
    if ( v3 )
    {
      v12 = 8 * v10;
      *(_DWORD *)(v8 + 608) = v10;
      v13 = v10 << 6;
      *(_DWORD *)(v8 + 604) = v11;
      *(_DWORD *)(v8 + 612) = v11 * (v13 + ((v12 + 231) & 0xFFFFFFF8)) + 16;
      v14 = v11 * (v13 + ((v12 + 231) & 0xFFFFFFF8)) + 616;
      *(_DWORD *)(v8 + 552) = v14;
      *(_DWORD *)(v8 + 556) = v12 + v14;
    }
  }
}
