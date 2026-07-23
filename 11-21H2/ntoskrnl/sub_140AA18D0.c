/*
 * XREFs of sub_140AA18D0 @ 0x140AA18D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AA1F1C @ 0x140AA1F1C (sub_140AA1F1C.c)
 */

__int64 __fastcall sub_140AA18D0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // edi
  int v5; // eax
  PVOID v6; // rcx
  int v7; // eax
  int v8; // eax
  _QWORD v10[11]; // [rsp+20h] [rbp-58h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  memset(v10, 0, 0x4CuLL);
  if ( (qword_140D01450 & 0x800) != 0 && dword_140D57588 && (unsigned int)(*(_DWORD *)a1 - 1) <= 2 )
  {
    v4 = sub_140AA1F1C(v10, a1, &P);
    if ( v4 >= 0 )
    {
      v5 = sub_14042A5E0(v10, v3);
      v6 = P;
      v4 = v5;
      if ( P )
      {
        v7 = v10[0];
        *(_DWORD *)a1 = v10[0];
        if ( v4 < 0 )
        {
          ExFreePoolWithTag(v6, 0);
        }
        else
        {
          v8 = v7 - 1;
          if ( !v8 || (unsigned int)(v8 - 1) <= 1 )
            *(_QWORD *)(a1 + 16) = v10[2];
        }
      }
    }
  }
  else
  {
    return (unsigned int)sub_14042A5E0(a1, v2);
  }
  return (unsigned int)v4;
}
