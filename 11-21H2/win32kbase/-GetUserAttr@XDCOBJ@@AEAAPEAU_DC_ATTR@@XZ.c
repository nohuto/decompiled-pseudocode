/*
 * XREFs of ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0021E20
 * Callers:
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0020114 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00D9014 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0022C00 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct _DC_ATTR *__fastcall XDCOBJ::GetUserAttr(XDCOBJ *this)
{
  GdiHandleManager *v1; // rbp
  _DWORD *v2; // r14
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _DWORD *v13; // rdx
  __int64 v14; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v16; // rdi
  __int64 ProcessWow64Process; // rax
  int v18; // ecx
  unsigned __int64 v19; // rsi
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v22; // [rsp+68h] [rbp+10h] BYREF

  v1 = gpHandleManager;
  v2 = *(_DWORD **)this;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000);
  v4 = *((_QWORD *)v1 + 2);
  v5 = 0LL;
  v22 = 0LL;
  v21 = 0;
  v6 = v3;
  v7 = 0LL;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex((GdiHandleEntryDirectory *)v4, v3, &v22, &v21)
    && v21 < *((_DWORD *)v22 + 5)
    && *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v22 + 3) + 8 * ((unsigned __int64)v21 >> 8))
                 + 16LL * (unsigned __int8)v21
                 + 8) )
  {
    v7 = *(_QWORD *)v22 + 24LL * v21;
  }
  v8 = GdiHandleManager::DecodeIndex(v1, v6);
  v10 = *(unsigned int *)(v4 + 2056);
  v11 = (unsigned int)v10 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16);
  v12 = v8;
  if ( v8 >= (unsigned int)v11
    || (v8 >= (unsigned int)v10
      ? (v11 = ((v8 - (unsigned int)v10) >> 16) + 1,
         v9 = *(_QWORD *)(v4 + 8 * v11 + 8),
         v12 = -65536 * ((v8 - (unsigned int)v10) >> 16) - (_DWORD)v10 + v8)
      : (v9 = *(_QWORD *)(v4 + 8)),
        (unsigned int)v12 >= *(_DWORD *)(v9 + 20)) )
  {
    v13 = 0LL;
  }
  else
  {
    v11 = 2LL * (unsigned __int8)v12;
    v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
  }
  if ( v13 != v2 || !v7 )
    return 0LL;
  v14 = *(_QWORD *)(v7 + 16);
  if ( v14 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11, v13, v9, v10);
    v16 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
    v18 = *((_DWORD *)v16 + 73);
    if ( ProcessWow64Process )
      v19 = (unsigned int)__ROR4__(v14, 32 - (v18 & 0x1F));
    else
      v19 = __ROR8__(v14, 64 - (v18 & 0x3Fu));
    return (struct _DC_ATTR *)(*((unsigned int *)v16 + 73) ^ v19);
  }
  return (struct _DC_ATTR *)v5;
}
