/*
 * XREFs of ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x18007B85C
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18006F564 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z @ 0x180092AA8 (-HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z.c)
 */

__int64 __fastcall HampExtendedExecutionCheckPolicy(unsigned int *a1, void *a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  const wchar_t *v8; // rdx
  unsigned __int8 v9; // al
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned __int8 v21; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  if ( !(_DWORD)v4 )
    goto LABEL_13;
  if ( (_DWORD)v4 != 1 )
  {
    if ( (_DWORD)v4 != 2 )
    {
      if ( (_DWORD)v4 == 3 )
      {
        v8 = L"extendedExecutionBackgroundAudio";
      }
      else
      {
        if ( (_DWORD)v4 != 4 )
          return 3221225659LL;
        v8 = L"extendedExecutionUnconstrained";
      }
      result = CapabilityCheck(a2, v8, &v21);
      goto LABEL_11;
    }
LABEL_13:
    v9 = 1;
    goto LABEL_14;
  }
  result = HampSystemCheckLocationCapability(a2, &v21);
LABEL_11:
  if ( (int)result < 0 )
    return result;
  v9 = v21;
LABEL_14:
  if ( !v9 )
    return 3221225506LL;
  v10 = a1[1] | 9;
  v11 = a1[2] | 0x11;
  v12 = v10;
  v13 = v11;
  if ( (_DWORD)v4 != 4 )
  {
    v11 = a1[2] | 0x13;
    v10 = a1[1] | 0x20B;
    v13 = v11;
    v12 = v10;
  }
  if ( (v4 & 0xFFFFFFFB) == 0 || (_DWORD)v4 == 2 )
  {
    v14 = v10 | 4;
    v15 = v11 | 4;
    a1[1] = v14;
    v12 = v14;
    a1[2] = v15;
    v13 = v15;
    a1[92] &= 0xFFFFFFFC;
    *((_QWORD *)a1 + 40) |= 0x20uLL;
  }
  v16 = *a1;
  if ( (_DWORD)v4 == 2 )
    v17 = v16 & 0xFFFFF3FF | 0x800;
  else
    v17 = v16 | 0x400;
  *a1 = v17;
  v18 = 256;
  v19 = 256;
  if ( (_DWORD)v4 != 2 )
  {
    v19 = 64;
    v18 = 128;
  }
  *a1 |= 0x28000u;
  a1[2] = v13 | v18;
  v20 = dword_1800C6D08[v4];
  a1[1] = v19 | v12;
  a1[67] = v20;
  if ( v20 != 5 )
    a1[68] = 300;
  return 0LL;
}
