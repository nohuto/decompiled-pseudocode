/*
 * XREFs of sub_14067EB68 @ 0x14067EB68
 * Callers:
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1406E8680 @ 0x1406E8680 (sub_1406E8680.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090DEF0 @ 0x14090DEF0 (sub_14090DEF0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091CBB0 @ 0x14091CBB0 (sub_14091CBB0.c)
 *     sub_14091CE30 @ 0x14091CE30 (sub_14091CE30.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 * Callees:
 *     sub_14067EAE0 @ 0x14067EAE0 (sub_14067EAE0.c)
 *     sub_14067EC64 @ 0x14067EC64 (sub_14067EC64.c)
 *     sub_14067ED34 @ 0x14067ED34 (sub_14067ED34.c)
 */

__int64 __fastcall sub_14067EB68(ULONG_PTR BugCheckParameter4)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rdx

  v1 = *(_QWORD **)(BugCheckParameter4 + 192);
  if ( v1 )
  {
    v8 = v1[3];
    if ( v8 )
    {
      v9 = *v1;
      v10 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD **)(*v1 + 8LL) != v1
        || (v11 = (_QWORD *)v1[1], (_QWORD *)*v11 != v1)
        || (*v11 = v9,
            *(_QWORD *)(v9 + 8) = v11,
            v12 = *(__int64 **)(BugCheckParameter4 + 192),
            v13 = *(_QWORD *)(v10 + 192) + 48LL,
            v14 = *(__int64 ***)(*(_QWORD *)(v10 + 192) + 56LL),
            *v14 != (__int64 *)v13) )
      {
        __fastfail(3u);
      }
      *v12 = v13;
      v12[1] = (__int64)v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
    }
  }
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  ++*(_QWORD *)(BugCheckParameter4 + 304);
  *(_DWORD *)(BugCheckParameter4 + 8) |= 0x20000u;
  sub_14067EAE0(v3, (_DWORD *)(BugCheckParameter4 + 16));
  sub_14067ED34(BugCheckParameter4);
  v4 = *(_QWORD *)(BugCheckParameter4 + 32);
  v5 = *(_QWORD *)(v4 + 1664);
  v6 = 3
     * ((unsigned int)(*(_DWORD *)(v4 + 1672) - 1) & ((unsigned int)(101027
                                                                   * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)));
  *(_QWORD *)(BugCheckParameter4 + 24) = *(_QWORD *)(v5
                                                   + 24
                                                   * ((unsigned int)(*(_DWORD *)(v4 + 1672) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
                                                   + 16);
  *(_QWORD *)(v5 + 8 * v6 + 16) = BugCheckParameter4 + 16;
  return sub_14067EC64(BugCheckParameter4);
}
