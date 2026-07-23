/*
 * XREFs of sub_140B09D6C @ 0x140B09D6C
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140259480 @ 0x140259480 (sub_140259480.c)
 *     sub_140297AE0 @ 0x140297AE0 (sub_140297AE0.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14075F4A4 @ 0x14075F4A4 (sub_14075F4A4.c)
 *     sub_1407607D8 @ 0x1407607D8 (sub_1407607D8.c)
 *     sub_14082CB7C @ 0x14082CB7C (sub_14082CB7C.c)
 *     sub_14082CCC0 @ 0x14082CCC0 (sub_14082CCC0.c)
 *     sub_140B09F98 @ 0x140B09F98 (sub_140B09F98.c)
 *     sub_140B0A000 @ 0x140B0A000 (sub_140B0A000.c)
 *     sub_140B0A37C @ 0x140B0A37C (sub_140B0A37C.c)
 */

__int64 __fastcall sub_140B09D6C(__int64 a1)
{
  bool v2; // si
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rcx
  PVOID v6; // r12
  int v7; // eax
  struct _KTHREAD *v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  int v12; // ebx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  v22 = 0LL;
  qword_140C4F488 = (__int64)&qword_140C4F480;
  qword_140C4F480 = (__int64)&qword_140C4F480;
  v2 = (xmmword_140D06920 & 0x20000000000LL) != 0 || (xmmword_140D06920 & 0x40000000000LL) != 0;
  ExInitializeResourceLite(&PsLoadedModuleResource);
  qword_140C10E30 = 0LL;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  qword_140C10E28 = (__int64)&qword_140C10E20;
  qword_140C10E20 = (__int64)&qword_140C10E20;
  sub_14082CCC0(0x7Eu, 0, 1);
  v3 = *(_QWORD *)(a1 + 16);
  sub_140B0A37C(v3);
  if ( v3 == a1 + 16 )
  {
LABEL_11:
    v8 = sub_1406F5B50();
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 != v9 )
    {
      do
      {
        if ( (v10[5] & 3) == 1 )
        {
          v14 = *(_QWORD *)(v10[9] + 144LL);
          v15 = *(_QWORD *)(v10[10] + 144LL);
          *(_QWORD *)(v14 + 280) = v15;
          v16 = v14 + 296;
          v17 = *(_QWORD *)(v10[9] + 144LL);
          v18 = (_QWORD *)(v15 + 296);
          *(_DWORD *)(v15 + 196) |= 0x20u;
          *(_QWORD *)(v15 + 280) = v17;
          v19 = *(_QWORD **)(v16 + 8);
          if ( *v19 != v16 )
            __fastfail(3u);
          *v18 = v16;
          *(_QWORD *)(v15 + 304) = v19;
          *v19 = v18;
          *(_QWORD *)(v16 + 8) = v18;
          *(_DWORD *)(v15 + 312) = *((_DWORD *)v10 + 15);
          v10[9] &= ~0x8000000000000000uLL;
          v10[10] &= ~0x8000000000000000uLL;
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL) );
    }
    sub_140B0A000();
    if ( (int)sub_140B09F98() >= 0 )
    {
      sub_1406F5AF0((__int64)v8);
      return 1LL;
    }
  }
  else
  {
    while ( (int)sub_14075F4A4(v3, (const void **)(v3 + 88), (const void **)(v3 + 72), 0, 1, &v22) >= 0 )
    {
      *(_QWORD *)(v3 + 144) = v22;
      v4 = v22;
      *(_DWORD *)(v22 + 196) |= 0x100u;
      v5 = v22;
      v6 = *(PVOID *)(v22 + 48);
      if ( v6 == qword_140D068F0 && (dword_140D06880 & 0x40000) == 0 )
      {
        v12 = *(_DWORD *)(v22 + 64);
        v13 = *(_QWORD *)(v22 + 48);
        v21 = 0LL;
        v20 = 0LL;
        sub_140297AE0(v13, (__int64)&v20);
        xmmword_140E00030 = v20;
        qword_140E00040 = v21;
        LODWORD(qword_140E00040) = v12;
        sub_140259480((__int64)v6);
        v5 = v22;
      }
      sub_1407607D8(v5);
      if ( v2 && (*(_DWORD *)(v22 + 104) & 0x800000) == 0 )
      {
        v7 = sub_14082CB7C(*(PVOID *)(v22 + 48), *(unsigned int *)(v22 + 64), (_QWORD *)(v4 + 320));
        if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741637 )
          break;
      }
      v3 = *(_QWORD *)v3;
      if ( v3 == a1 + 16 )
        goto LABEL_11;
    }
  }
  return 0LL;
}
