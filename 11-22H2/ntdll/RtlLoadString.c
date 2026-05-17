/*
 * XREFs of RtlLoadString @ 0x180003040
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     RtlLocaleNameToLcid @ 0x180015780 (RtlLocaleNameToLcid.c)
 *     LdrpAccessResourceData @ 0x180022C2C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall RtlLoadString(
        void *a1,
        unsigned __int16 a2,
        const WCHAR *a3,
        int a4,
        _QWORD *a5,
        _WORD *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r10d
  __int64 v9; // r12
  char v11; // si
  int v12; // edx
  unsigned __int16 v13; // cx
  int v14; // ebx
  __int16 v15; // r8
  unsigned __int16 v17; // [rsp+40h] [rbp-78h]
  unsigned __int64 v18; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+58h] [rbp-60h] BYREF
  _QWORD *v21; // [rsp+60h] [rbp-58h]
  _QWORD v22[4]; // [rsp+68h] [rbp-50h] BYREF

  v8 = (unsigned int)a3;
  v9 = a2;
  v21 = a5;
  v19 = 0LL;
  v11 = a4 & 1;
  if ( a1 && a5 && (a4 & 0xFFFFFFFE) == 0 )
  {
    if ( v11 && (a7 || a8) )
      return 3221225659LL;
    if ( (unsigned int)a3 <= 0xFFFF )
      goto LABEL_8;
    if ( *a3 )
    {
      if ( (int)RtlLocaleNameToLcid(a3) < 0 )
        return 3221225485LL;
      v8 = v17;
    }
    else
    {
      v8 = 0;
    }
LABEL_8:
    v22[0] = 6LL;
    v22[1] = ((unsigned int)v9 >> 4) + 1;
    v22[2] = v8;
    v22[3] = v9;
    v18 = 0LL;
    if ( v11 )
    {
      v12 = LdrpSearchResourceSection_U((_DWORD)a1, (unsigned int)v22, 4, 1, (__int64)&v20);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v12 = LdrpAccessResourceData(a1, v20, &v19, 0LL);
    }
    else
    {
      v12 = LdrResSearchResource(a1, v22, (__int64)&v19, (__int64)&v18, a7, a8);
      if ( v12 >= 0 && v18 > 0xFFFF )
        v12 = -1073741701;
    }
    if ( v12 >= 0 && v19 )
    {
      v13 = 0;
      v14 = v9 & 0xF;
      v18 >>= 1;
      do
      {
        v15 = *(_WORD *)(v19 + 2LL * v13);
        v13 += v15 + 1;
        if ( !v11 && v13 > v18 )
          return (unsigned int)-1073741701;
        --v14;
      }
      while ( v14 >= 0 );
      if ( v13 && v15 )
        v13 -= v15;
      *v21 = v19 + 2LL * v13;
      if ( a6 )
        *a6 = v15;
    }
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
