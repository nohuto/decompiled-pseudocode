/*
 * XREFs of sub_14084D6C0 @ 0x14084D6C0
 * Callers:
 *     sub_140748B18 @ 0x140748B18 (sub_140748B18.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14084D6C0(void *a1, int a2, void **a3, _DWORD *a4)
{
  int v6; // edx
  int v7; // edx
  const WCHAR *v8; // rdx
  NTSTATUS v9; // edi
  unsigned int *v10; // rbx
  unsigned int v11; // eax
  __int64 Pool2; // rax
  unsigned int *v13; // r10
  unsigned int v14; // r8d
  _DWORD *i; // rax
  unsigned int v16; // edx
  _DWORD *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  P = 0LL;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 3221225712LL;
      v8 = L"BootConfig";
    }
    else
    {
      v8 = L"ForcedConfig";
    }
  }
  else
  {
    v8 = L"AllocConfig";
  }
  v9 = sub_14067B838(a1, v8, 0, &P);
  if ( v9 >= 0 )
  {
    v10 = (unsigned int *)P;
    if ( *((_DWORD *)P + 1) == 8 )
    {
      v11 = *((_DWORD *)P + 3);
      if ( v11 )
      {
        Pool2 = ExAllocatePool2(256LL, v11, 1970499664LL);
        *a3 = (void *)Pool2;
        if ( Pool2 )
        {
          *a4 = v10[3];
          memmove(*a3, (char *)v10 + v10[2], v10[3]);
          v13 = (unsigned int *)*a3;
          v14 = 0;
          for ( i = (char *)*a3 + 4; v14 < *v13; i = v17 )
          {
            if ( *i == -1 )
            {
              i[1] = 0;
              *i = 1;
            }
            v16 = i[3];
            v17 = i + 4;
            if ( v16 )
            {
              v18 = v16;
              do
              {
                v19 = 0LL;
                if ( *(_BYTE *)v17 == 5 )
                  v19 = (unsigned int)v17[1];
                v17 = (_DWORD *)((char *)v17 + v19 + 20);
                --v18;
              }
              while ( v18 );
            }
            ++v14;
          }
        }
        else
        {
          v9 = -1073741670;
        }
      }
    }
    else
    {
      v9 = -1073741823;
    }
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)v9;
}
