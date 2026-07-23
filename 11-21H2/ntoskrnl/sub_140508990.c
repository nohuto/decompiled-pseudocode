/*
 * XREFs of sub_140508990 @ 0x140508990
 * Callers:
 *     HalEnumerateEnvironmentVariablesEx @ 0x140508560 (HalEnumerateEnvironmentVariablesEx.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140456C2C @ 0x140456C2C (sub_140456C2C.c)
 *     sub_140456C50 @ 0x140456C50 (sub_140456C50.c)
 *     sub_140456C76 @ 0x140456C76 (sub_140456C76.c)
 */

__int64 __fastcall sub_140508990(int a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  int v4; // r13d
  unsigned int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rbx
  _DWORD *v8; // rsi
  int v9; // r12d
  bool v10; // r14
  unsigned int v11; // edx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  unsigned int v16; // r13d
  bool v17; // cl
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rax
  unsigned int v22; // edi
  char v24; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  size_t Size; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  unsigned int v29; // [rsp+4Ch] [rbp-B4h]
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v32; // [rsp+68h] [rbp-98h]
  _DWORD *v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+78h] [rbp-88h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp-78h] BYREF
  _WORD Src[256]; // [rsp+A0h] [rbp-60h] BYREF

  v31 = a2;
  v33 = a4;
  v32 = a3;
  v4 = a1;
  Affinity = 0LL;
  v26 = 0LL;
  v34 = 0LL;
  PreviousAffinity = 0LL;
  if ( !byte_140C4BFC8 || !off_140E00010 || !off_140E00010[4] || !off_140E00010[3] )
    return 3221225474LL;
  if ( (unsigned int)(a1 - 1) > 1 || (a3 & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    return 3221225485LL;
  v5 = *a4;
  v6 = 20;
  Src[0] = 0;
  v7 = a3;
  if ( a1 != 1 )
    v6 = 32;
  v8 = 0LL;
  v28 = v6;
  v9 = 0;
  v10 = v5 != 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v24 = 0;
  }
  else
  {
    v24 = 1;
    v11 = dword_140D0E5E0[HIDWORD(KeGetPcr()[1].LockArray)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v11 >> 6);
    Affinity.Mask = 1LL << (v11 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    Size = 512LL;
    sub_140456C50(0LL);
    sub_140456C76(0x10u);
    ((void (__fastcall *)(size_t *, _WORD *, __int128 *))off_140E00010[4])(&Size, Src, &v34);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFEF);
    sub_140456C2C(0LL);
    if ( v12 )
      break;
    if ( !v31 || (unsigned __int8)sub_14042A5E0(&v34, Src) )
    {
      v13 = (v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v13 != v7 )
      {
        v14 = v13 - v7;
        v7 = (v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 >= v14 )
        {
          v5 -= v14;
        }
        else
        {
          v10 = 0;
          v5 = 0;
          v9 = -1073741789;
        }
      }
      v15 = Size + v28;
      if ( v4 != 1 )
        v15 = (v15 + 3) & 0xFFFFFFFC;
      v16 = 0;
      v17 = 0;
      if ( v5 >= v15 )
        v16 = v5 - v15;
      else
        v9 = -1073741789;
      if ( v5 >= v15 )
        v17 = v10;
      v29 = v16;
      v10 = v17;
      if ( a1 == 1 )
      {
        if ( v17 )
        {
          *(_OWORD *)(v7 + 4) = v34;
          memmove((void *)(v7 + 20), Src, Size);
          if ( v8 )
            *v8 = v7 - (_DWORD)v8;
          v8 = (_DWORD *)v7;
        }
        v18 = v15;
        v5 = v16;
      }
      else
      {
        if ( v17 )
        {
          *(_OWORD *)(v7 + 16) = v34;
          memmove((void *)(v7 + 32), Src, Size);
          v26 = v16;
          *(_DWORD *)(v7 + 4) = ((v7 + Size + 35) & 0xFFFFFFFC) - v7;
        }
        else
        {
          v26 = 0LL;
        }
        sub_140456C76(8u);
        v21 = ((__int64 (__fastcall *)(_WORD *, __int128 *, __int64, __int64 *, __int64))off_140E00010[3])(
                Src,
                &v34,
                v20,
                &v26,
                v19);
        _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFF7);
        if ( v21 )
        {
          if ( v21 != 0x8000000000000005uLL )
          {
            v22 = -1073741823;
            goto LABEL_48;
          }
          v5 = 0;
          v10 = 0;
          v9 = -1073741789;
        }
        else
        {
          v5 = v29;
          if ( v10 )
          {
            *(_DWORD *)(v7 + 8) = v26;
            v5 -= v26;
            if ( v8 )
              *v8 = v7 - (_DWORD)v8;
            v8 = (_DWORD *)v7;
          }
        }
        v18 = v26 + v15;
      }
      v4 = a1;
      v7 += v18;
    }
  }
  if ( v12 != 0x800000000000000EuLL )
    v9 = -1073741823;
  v22 = v9;
LABEL_48:
  if ( v24 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v8 )
    *v8 = 0;
  *v33 = v7 - v32;
  return v22;
}
