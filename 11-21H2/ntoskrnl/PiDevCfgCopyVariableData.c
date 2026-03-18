/*
 * XREFs of PiDevCfgCopyVariableData @ 0x1408048F4
 * Callers:
 *     PiDevCfgResolveVariableExpression @ 0x140804350 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14094E570 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgCopyVariableData(__int64 a1, __int64 a2)
{
  int v2; // esi
  void *v4; // rdi
  __int64 v5; // rdx
  unsigned int v7; // eax
  void *Pool2; // rax
  __int64 v10; // rcx
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 40);
  if ( !v5 )
    goto LABEL_6;
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) != 0x8000 )
  {
    v7 = *(_DWORD *)(a2 + 36);
    if ( v7 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v7, 1667526736LL);
      v4 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memmove(Pool2, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 36));
    }
    goto LABEL_6;
  }
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
  else
    v10 = 0LL;
  v2 = SysCtxRegOpenKey(v10, v5, 0LL, 0, 0x20019u, (__int64)&v11);
  if ( v2 >= 0 )
  {
    v4 = v11;
LABEL_6:
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
    *(_QWORD *)(a1 + 40) = v4;
  }
  return (unsigned int)v2;
}
