/*
 * XREFs of sub_1409D8AB0 @ 0x1409D8AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1409D7990 @ 0x1409D7990 (sub_1409D7990.c)
 *     sub_1409D7C2C @ 0x1409D7C2C (sub_1409D7C2C.c)
 */

__int64 __fastcall sub_1409D8AB0(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // ebp
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // rbx

  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - 0x11D046F0CB3A4006LL;
  if ( *(_QWORD *)((char *)NotificationStructure + 4) == 0x11D046F0CB3A4006LL )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( !v3 )
    goto LABEL_7;
  v4 = *(_QWORD *)((char *)NotificationStructure + 4) - 0x11D046F0CB3A4008LL;
  if ( *(_QWORD *)((char *)NotificationStructure + 4) == 0x11D046F0CB3A4008LL )
    v4 = *(_QWORD *)((char *)NotificationStructure + 12) - 0x3F05139760008FB0LL;
  if ( !v4 )
  {
LABEL_7:
    v5 = 0;
    v6 = &unk_140D32218;
    do
    {
      v7 = v5 | (16 * (*v6 & 0xFFF));
      v8 = sub_1409D7C2C((__int64)&unk_140D32200, v7);
      if ( v8 )
      {
        v9 = v7;
        v10 = 0LL;
        if ( *(_QWORD *)(v8 + 48) == NotificationStructure[3] )
          v10 = v8;
        sub_1402AD030((struct _EX_RUNDOWN_REF *)&unk_140D32208 + 4 * (v9 & 0xF));
        if ( v10 )
          sub_1409D7990((__int64)&unk_140D32200);
      }
      ++v5;
      v6 += 8;
    }
    while ( v5 < 0x10 );
  }
  return 0LL;
}
