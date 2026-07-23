/*
 * XREFs of sub_14063AFCC @ 0x14063AFCC
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14063BE80 @ 0x14063BE80 (sub_14063BE80.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14063AFCC(void *Src, size_t Size, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v5; // rdi
  NTSTATUS v6; // ebx
  _DWORD *Pool2; // rax
  int v8; // r8d
  __int64 v9; // rax
  size_t v10; // rax
  unsigned __int64 v11; // r9
  _BYTE *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  _BYTE *v15; // rdx

  v5 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(stru_140D3CAF0, PreviousMode) )
  {
    v6 = -1073741727;
    goto LABEL_30;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  v6 = RtlRunOnceExecuteOnce(&RunOnce, sub_14063BB90, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, Size, 1819242320LL);
    v5 = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_30;
    }
    memmove(Pool2, Src, Size);
    if ( *v5 == 1 )
    {
      v8 = v5[1];
      if ( v8 )
      {
        v9 = 48LL * (unsigned int)(v8 - 1);
        if ( is_mul_ok((unsigned int)(v8 - 1), 0x30uLL) )
        {
          v6 = 0;
        }
        else
        {
          v9 = -1LL;
          v6 = -1073741675;
        }
        if ( v6 < 0 )
          goto LABEL_30;
        v10 = v9 + 56;
        if ( v10 < 0x38 )
        {
          v6 = -1073741675;
          goto LABEL_30;
        }
        if ( v10 > Size )
        {
LABEL_5:
          v6 = -1073741820;
          goto LABEL_30;
        }
        v11 = 0LL;
        v12 = v5 + 4;
LABEL_21:
        v13 = *((_DWORD *)v12 - 2);
        if ( v13 != 1819242320 && v13 )
        {
          v14 = 0LL;
          v15 = v12;
          while ( (*v15 & 0xF) == 0 && (v15[8] & 0xF) == 0 )
          {
            ++v14;
            v15 += 16;
            if ( v14 >= 2 )
            {
              ++v11;
              v12 += 48;
              if ( v11 < (unsigned int)v5[1] )
                goto LABEL_21;
              v6 = sub_14063BE80(v5, v15, v14, v11);
              if ( v6 >= 0 )
                v6 = 0;
              goto LABEL_30;
            }
          }
        }
      }
    }
    v6 = -1073741811;
  }
LABEL_30:
  if ( v5 )
    sub_140348B40((ULONG_PTR)v5);
  return (unsigned int)v6;
}
