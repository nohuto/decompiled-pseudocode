/*
 * XREFs of sub_18005346C @ 0x18005346C
 * Callers:
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_180051780 @ 0x180051780 (sub_180051780.c)
 *     sub_180051F50 @ 0x180051F50 (sub_180051F50.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005346C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v13; // eax
  int v14; // r8d
  __int128 v15; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v19[4]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+A8h] [rbp-1h] BYREF

  v17[2] = a3;
  v5 = *(_QWORD **)(a1 + 104);
  if ( !(0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - (_QWORD)v5) >> 3)) )
  {
    sub_1800113D0(v19, "Out of range");
    v13 = (unsigned int)sub_1800113D0(
                          v18,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\meshinstance.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v13, v14, (unsigned int)v19, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !sub_180016240(v5, a3) )
  {
    sub_180051F50(a1, 0LL);
    v6 = a3[1];
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = a3[1];
    }
    v7 = *a3;
    v17[0] = *v5;
    *v5 = v7;
    v17[1] = v5[1];
    v5[1] = v6;
    sub_180010910((__int64)v17);
    if ( sub_1800122C0(a3) )
    {
      v8 = *a3;
      v9 = *(_QWORD *)(*a3 + 144LL);
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v9 = *(_QWORD *)(v8 + 144);
      }
      v16[0] = *(_QWORD *)(v8 + 136);
      v16[1] = v9;
      if ( sub_1800122C0(v16) )
      {
        v15 = 0LL;
        if ( v10 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          v11 = v16[0];
        }
        *(_QWORD *)&v15 = v11;
        *((_QWORD *)&v15 + 1) = v10;
        sub_180051780(a1, 0LL, &v15);
      }
      sub_180010910((__int64)v16);
    }
  }
  return sub_180010910((__int64)a3);
}
