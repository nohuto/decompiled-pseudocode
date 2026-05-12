/*
 * XREFs of sub_1C00ABDB0 @ 0x1C00ABDB0
 * Callers:
 *     sub_1C00A4654 @ 0x1C00A4654 (sub_1C00A4654.c)
 *     sub_1C00AAAAC @ 0x1C00AAAAC (sub_1C00AAAAC.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0022B34 @ 0x1C0022B34 (sub_1C0022B34.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00ABDB0(__int64 a1)
{
  unsigned int v1; // ebx
  void *v3; // rcx
  __int64 v4; // rax
  void *v5; // rcx
  __int64 v6; // rax

  v1 = 0;
  if ( (_DWORD)dword_1C0093584 && dword_1C0093BF0 )
  {
    v3 = *(void **)(a1 + 2304);
    if ( v3 )
    {
      memset_0(v3, 0, (unsigned int)dword_1C0093584);
    }
    else
    {
      v4 = sub_1C0007CF4(72LL, (unsigned int)dword_1C0093584, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2304) = v4;
      if ( !v4 )
        goto LABEL_9;
    }
    v5 = *(void **)(a1 + 2328);
    if ( v5 )
    {
      memset_0(v5, 0, (unsigned int)dword_1C009357C);
    }
    else
    {
      v6 = sub_1C0007CF4(72LL, (unsigned int)dword_1C009357C, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2328) = v6;
      if ( !v6 )
      {
LABEL_9:
        v1 = -1073741801;
        sub_1C0022B34(a1);
        return v1;
      }
    }
    *(_BYTE *)(a1 + 451) |= 0x10u;
  }
  return v1;
}
