/*
 * XREFs of sub_1406822EC @ 0x1406822EC
 * Callers:
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     sub_1402075A4 @ 0x1402075A4 (sub_1402075A4.c)
 *     sub_140208434 @ 0x140208434 (sub_140208434.c)
 *     PsGetProcessSessionId @ 0x14028AF60 (PsGetProcessSessionId.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140360E3C @ 0x140360E3C (sub_140360E3C.c)
 *     sub_140679480 @ 0x140679480 (sub_140679480.c)
 *     sub_1406825AC @ 0x1406825AC (sub_1406825AC.c)
 *     sub_1406827E8 @ 0x1406827E8 (sub_1406827E8.c)
 *     sub_140683ED4 @ 0x140683ED4 (sub_140683ED4.c)
 *     sub_1406CC024 @ 0x1406CC024 (sub_1406CC024.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1409B01E0 @ 0x1409B01E0 (sub_1409B01E0.c)
 *     sub_1409B07A8 @ 0x1409B07A8 (sub_1409B07A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406822EC(char *Object, __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // esi
  __int64 v9; // rcx
  _QWORD *PoolWithTag; // r15
  unsigned __int64 v12; // r14
  unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  PVOID v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  char v18; // al
  int i; // r8d
  __int64 v20; // rax
  bool v21; // zf
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h]

  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        sub_140683ED4(a3);
        sub_1406825AC(Object, a2);
        ObfReferenceObjectWithTag(Object, 0x73507350u);
        ObfDereferenceObjectWithTag((PVOID)a3, 0x73507350u);
        v24 = *((_QWORD *)Object + 193);
        if ( !*((_DWORD *)Object + 385) )
        {
          if ( !v24 )
            goto LABEL_68;
          v24 = *(_QWORD *)(v24 + 1544);
        }
        sub_140360E3C(v24, a2);
        goto LABEL_68;
      }
      if ( a4 == 4 || a4 == 5 )
        goto LABEL_13;
      if ( a4 != 6 )
      {
        if ( a4 != 7 )
        {
          v8 = -1073741811;
          goto LABEL_6;
        }
LABEL_13:
        PoolWithTag = 0LL;
        v12 = *(_QWORD *)(a3 + 1296) + 1LL;
        if ( v12 > 2 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v12 - 16, 0x624A7350u);
          if ( !PoolWithTag )
            return 3221225626LL;
        }
        if ( a4 - 4 <= 1 )
        {
          v8 = sub_1406827E8(Object, a2);
          if ( v8 < 0 )
            goto LABEL_39;
        }
        v13 = (unsigned __int16 *)*((_QWORD *)Object + 151);
        if ( v13 )
        {
          sub_1402075A4(v13);
          if ( (*(_DWORD *)(a3 + 1512) & 0x20) == 0 )
          {
            v8 = sub_140679480(a3, 0LL);
            if ( v8 < 0 )
            {
              sub_140208434(*((_QWORD *)Object + 150) + 128LL, *(_QWORD *)(*((_QWORD *)Object + 150) + 128LL), 0LL);
LABEL_39:
              if ( PoolWithTag )
                ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
              goto LABEL_6;
            }
          }
          sub_140208434(
            *((_QWORD *)Object + 150) + 128LL,
            *(_QWORD *)(*((_QWORD *)Object + 150) + 128LL),
            *(_QWORD *)(a3 + 1200) + 128LL);
        }
        else
        {
          v14 = *(_QWORD *)(a3 + 1208);
          if ( v14 )
            *((_QWORD *)Object + 151) = v14;
        }
        v15 = Object;
        if ( a4 != 4 )
          v15 = (PVOID)a3;
        ObfReferenceObjectWithTag(v15, 0x73507350u);
        v16 = *(_QWORD **)(a3 + 1256);
        v17 = Object + 1232;
        if ( *v16 != a3 + 1248 )
          __fastfail(3u);
        *v17 = a3 + 1248;
        *((_QWORD *)Object + 155) = v16;
        *v16 = v17;
        *(_QWORD *)(a3 + 1256) = v17;
        *((_QWORD *)Object + 158) = a3;
        *((_QWORD *)Object + 159) = *(_QWORD *)(a3 + 1272);
        v18 = *(_BYTE *)(a3 + 1066) + 1;
        *((_QWORD *)Object + 162) = v12;
        Object[1066] = v18;
        if ( v12 > 2 )
        {
          if ( v12 > 3 )
          {
            v23 = *(_QWORD *)(a3 + 1296) - 2LL;
            if ( *(_QWORD *)(a3 + 1296) != 2LL )
            {
              do
              {
                PoolWithTag[v23] = *(_QWORD *)(*(_QWORD *)(a3 + 1304) + 8 * v23 - 8);
                --v23;
              }
              while ( v23 );
            }
          }
          *PoolWithTag = *(_QWORD *)(a3 + 1264);
          *((_QWORD *)Object + 163) = PoolWithTag;
          PoolWithTag = 0LL;
        }
        if ( a4 == 4 )
        {
          sub_140683ED4(a3);
          sub_1406825AC(Object, a2);
        }
        sub_1406CC024(Object, 0LL);
        *((_DWORD *)Object + 262) += *(_DWORD *)(a3 + 1048);
        *((_DWORD *)Object + 264) += *(_DWORD *)(a3 + 1056);
        *((_DWORD *)Object + 263) += *(_DWORD *)(a3 + 1052);
        *((_DWORD *)Object + 265) += *(_DWORD *)(a3 + 1060);
        *((_QWORD *)Object + 221) = *(_QWORD *)(a3 + 1768);
        if ( (*(_DWORD *)(a3 + 1512) & 0x1841000) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 378, *(_DWORD *)(a3 + 1512) & 0x1841000);
        for ( i = 0; i < 3; ++i )
        {
          if ( (unsigned int)(i - 1) > 1 && *(_QWORD *)(a3 + 1024) )
            sub_1409B07A8(Object);
        }
        if ( *(_DWORD *)(a3 + 1540) )
        {
          v20 = a3;
          v21 = a3 == 0;
        }
        else
        {
          v20 = *(_QWORD *)(a3 + 1544);
          v21 = v20 == 0;
        }
        if ( v21 )
        {
          if ( *((_DWORD *)Object + 385) && a4 == 4 )
            sub_140360E3C(*((_QWORD *)Object + 193), a2);
        }
        else
        {
          v25[1] = v20;
          LOBYTE(v26) = 1;
          sub_1406FF880(Object, (__int64)v25, 5);
        }
        v22 = *(void **)(a3 + 1752);
        if ( v22 )
        {
          ObfReferenceObjectWithTag(v22, 0x624A7350u);
          *((_QWORD *)Object + 219) = *(_QWORD *)(a3 + 1752);
          *((_QWORD *)Object + 220) = *(_QWORD *)(a3 + 1760);
        }
        if ( a4 == 7 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 379, 0);
        v8 = 0;
        goto LABEL_39;
      }
      _interlockedbittestandset((volatile signed __int32 *)Object + 379, 0);
    }
LABEL_68:
    v8 = 0;
    goto LABEL_6;
  }
  v8 = sub_1406827E8(Object, a2);
  if ( v8 >= 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x73507350u);
    sub_1406825AC(Object, a2);
  }
  v9 = *((_QWORD *)Object + 193);
  if ( !*((_DWORD *)Object + 385) )
  {
    if ( !v9 )
      goto LABEL_6;
    v9 = *(_QWORD *)(v9 + 1544);
  }
  sub_140360E3C(v9, a2);
LABEL_6:
  if ( a2 && v8 >= 0 && byte_140D068E0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(a2) )
      sub_1409B01E0(Object, a2, a4);
  }
  return (unsigned int)v8;
}
