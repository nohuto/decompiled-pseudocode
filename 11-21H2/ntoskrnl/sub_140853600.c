/*
 * XREFs of sub_140853600 @ 0x140853600
 * Callers:
 *     sub_1408535B0 @ 0x1408535B0 (sub_1408535B0.c)
 *     sub_140B24AB0 @ 0x140B24AB0 (sub_140B24AB0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     sub_14036C1D4 @ 0x14036C1D4 (sub_14036C1D4.c)
 *     sub_1403D6B2C @ 0x1403D6B2C (sub_1403D6B2C.c)
 */

__int64 __fastcall sub_140853600(int a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ecx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( byte_140C1C940 && sub_1403D6B2C() )
    {
      v6 = sub_14036C1D4(72LL, v5);
      v7 = (_QWORD *)v6;
      if ( v6 )
      {
        *(_DWORD *)(v6 + 24) = a1;
        *(_QWORD *)(v6 + 16) = 0LL;
        v8 = (_QWORD *)(v6 + 40);
        v8[1] = v8;
        *v8 = v8;
        v7[8] = v7 + 7;
        v7[7] = v7 + 7;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C828, 0LL);
        v9 = (_QWORD *)qword_140C1C818;
        if ( *(__int64 **)qword_140C1C818 != &qword_140C1C810 )
          __fastfail(3u);
        *v7 = &qword_140C1C810;
        v7[1] = v9;
        *v9 = v7;
        qword_140C1C818 = (__int64)v7;
        sub_14036C0A0((ULONG_PTR)&stru_140C1C828);
        *a2 = v7;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
