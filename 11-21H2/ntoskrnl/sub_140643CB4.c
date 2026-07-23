/*
 * XREFs of sub_140643CB4 @ 0x140643CB4
 * Callers:
 *     sub_140643D54 @ 0x140643D54 (sub_140643D54.c)
 * Callees:
 *     sub_1403C0934 @ 0x1403C0934 (sub_1403C0934.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051CD90 @ 0x14051CD90 (sub_14051CD90.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 */

__int64 __fastcall sub_140643CB4(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // rbx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = *(_DWORD *)(a1 + 12);
  v2 = -1073741811;
  v3 = sub_14051CD90(a1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 28) <= 0x10u )
    {
      v4 = sub_140643F2C(&unk_140CE1A98, *(unsigned int *)(v3 + 24));
      v6 = v4;
      if ( v4 )
      {
        if ( *(_QWORD *)(v5 + 48) )
        {
          if ( sub_1403C0934(v4, 3, 0) )
            v2 = sub_14042A5E0(a1, &v8);
          else
            v2 = -1073741822;
          _InterlockedDecrement((volatile signed __int32 *)(v6 + 92));
          *(_DWORD *)(a1 + 12) = v8;
        }
      }
    }
  }
  return v2;
}
