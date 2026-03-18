/*
 * XREFs of MiLimitLoaderBlockHighMemory @ 0x140B1B910
 * Callers:
 *     MiMemoryLicense @ 0x140B1B688 (MiMemoryLicense.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLimitLoaderBlockHighMemory(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 *v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  ULONG_PTR v13; // r8
  ULONG_PTR v14; // r9
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v18; // r10

  v2 = (unsigned __int64 *)(a1 + 352);
  v3 = 0LL;
  v4 = KeFeatureBits & 0x2000000000LL;
  v6 = *(_QWORD *)(a1 + 360);
  if ( (v6 & 1) == 0 )
  {
    v7 = *(_QWORD **)(a1 + 360);
    goto LABEL_21;
  }
  if ( v6 != 1 )
  {
    v7 = (_QWORD *)(v6 ^ ((unsigned __int64)v2 | 1));
    while ( 1 )
    {
LABEL_21:
      if ( !v7 )
        return v3;
      v15 = (_QWORD *)v7[1];
      v16 = (unsigned __int64)v7;
      v8 = v7;
      if ( v15 )
      {
        v9 = (_QWORD *)*v15;
        v7 = (_QWORD *)v7[1];
        if ( *v15 )
        {
          do
          {
            v7 = v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v8 )
            break;
          v8 = v7;
        }
      }
      v10 = *(unsigned int *)(v16 + 24);
      if ( v4 )
        break;
      if ( (_DWORD)v10 == 38 )
      {
        v10 = 24LL;
      }
      else
      {
        if ( (_DWORD)v10 != 39 )
          break;
        v10 = 2LL;
      }
      *(_DWORD *)(v16 + 24) = v10;
LABEL_13:
      if ( (unsigned int)v10 <= 0x22 && (v11 = 0x400800008LL, _bittest64(&v11, v10)) )
      {
LABEL_24:
        if ( (_DWORD)v10 == 3 )
        {
LABEL_17:
          v13 = *(_QWORD *)(v16 + 40);
          v14 = *(_QWORD *)(v16 + 32);
          if ( v14 + v13 > a2 )
          {
            if ( (unsigned int)v10 > 0x23 || (v18 = 0xA0100013CLL, !_bittest64(&v18, v10)) )
              KeBugCheckEx(0x1Au, 0x3030308uLL, a2, v14, *(_QWORD *)(v16 + 40));
            if ( v14 < a2 )
            {
              v13 = a2 - v14;
              *(_QWORD *)(v16 + 40) = a2 - v14;
              goto LABEL_18;
            }
            RtlRbRemoveNode(v2, v16);
          }
          else
          {
LABEL_18:
            if ( v14 + v13 - 1 > v3 && (_DWORD)v10 != 3 )
              v3 = v14 + v13 - 1;
          }
        }
      }
      else
      {
        if ( (unsigned int)v10 > 0x2A )
          goto LABEL_17;
        v12 = 0x5C000400000LL;
        if ( !_bittest64(&v12, v10) )
          goto LABEL_17;
      }
    }
    if ( (_DWORD)v10 == 32 || (_DWORD)v10 == 6 || (_DWORD)v10 == 30 || (_DWORD)v10 == 31 )
      goto LABEL_24;
    goto LABEL_13;
  }
  return v3;
}
