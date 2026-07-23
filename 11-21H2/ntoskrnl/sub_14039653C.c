/*
 * XREFs of sub_14039653C @ 0x14039653C
 * Callers:
 *     sub_140396464 @ 0x140396464 (sub_140396464.c)
 *     sub_1403DEE60 @ 0x1403DEE60 (sub_1403DEE60.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1403B5088 @ 0x1403B5088 (sub_1403B5088.c)
 */

__int64 __fastcall sub_14039653C(_SLIST_ENTRY *a1)
{
  PSLIST_ENTRY v2; // rax
  unsigned int v3; // ebx
  _SLIST_ENTRY *v4; // rdi
  int v5; // esi
  __int64 v6; // r8

  v2 = sub_140202234((__int64)&unk_140CF7340);
  v3 = 0;
  v4 = v2;
  if ( !v2 )
  {
    v3 = -1073741670;
LABEL_6:
    ExAcquireFastMutex(&stru_140C1FB00);
    --dword_140C1FB40;
    KeReleaseGuardedMutex(&stru_140C1FB00);
    return v3;
  }
  v2->Next = a1;
  v5 = sub_1403B5088(sub_1403B1270, v2);
  if ( v5 < 0 )
  {
    sub_140203D88((__int64)&unk_140CF7340, v4, v6);
    v3 = v5;
    goto LABEL_6;
  }
  return v3;
}
