/*
 * XREFs of sub_14081B144 @ 0x14081B144
 * Callers:
 *     sub_14081AFCC @ 0x14081AFCC (sub_14081AFCC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14081B144(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  int *v3; // rcx
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 40) )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v2 = *(int *)(a1 + 44);
    if ( (unsigned int)v2 > 1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
      v3 = &dword_140C1C1F8[48 * v2];
      if ( *v3 && !*((_BYTE *)v3 + 4) )
      {
        *((_BYTE *)v3 + 4) = 1;
        v4 = (_QWORD **)(v3 + 44);
        while ( 1 )
        {
          v5 = *v4;
          if ( *v4 == v4 )
            break;
          if ( (_QWORD **)v5[1] != v4 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
            __fastfail(3u);
          *v4 = v7;
          v7[1] = v4;
          v5[1] = v5;
          *v5 = v5;
          sub_14036C0A0((ULONG_PTR)&stru_140C1C1E8);
          sub_14042A5E0(v5[3], v8);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
        }
      }
      sub_14036C0A0((ULONG_PTR)&stru_140C1C1E8);
    }
  }
  return v1;
}
