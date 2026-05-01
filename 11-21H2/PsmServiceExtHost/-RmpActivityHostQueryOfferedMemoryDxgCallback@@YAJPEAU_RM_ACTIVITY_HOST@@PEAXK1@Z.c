/*
 * XREFs of ?RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003E1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v4; // ebx
  int v6; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v4 = 0;
  v8[0] = 32LL;
  v8[2] = 0LL;
  v9 = 0LL;
  v8[1] = a2;
  v6 = D3DKMTQueryProcessOfferInfo(v8);
  if ( v6 >= 0 )
    *a4 += v9;
  else
    return (unsigned int)v6;
  return v4;
}
