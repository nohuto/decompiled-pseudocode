/*
 * XREFs of PsCreateSystemThread @ 0x1406F0310
 * Callers:
 *     sub_140261C40 @ 0x140261C40 (sub_140261C40.c)
 *     sub_140262118 @ 0x140262118 (sub_140262118.c)
 *     sub_1402621B0 @ 0x1402621B0 (sub_1402621B0.c)
 *     sub_14026446C @ 0x14026446C (sub_14026446C.c)
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     sub_1403898C4 @ 0x1403898C4 (sub_1403898C4.c)
 *     sub_1403B5088 @ 0x1403B5088 (sub_1403B5088.c)
 *     sub_1403D0750 @ 0x1403D0750 (sub_1403D0750.c)
 *     sub_1403D0FE0 @ 0x1403D0FE0 (sub_1403D0FE0.c)
 *     sub_1403D8274 @ 0x1403D8274 (sub_1403D8274.c)
 *     sub_14053C908 @ 0x14053C908 (sub_14053C908.c)
 *     sub_14061A490 @ 0x14061A490 (sub_14061A490.c)
 *     ExRegisterBootDevice @ 0x14063A090 (ExRegisterBootDevice.c)
 *     sub_1406F9808 @ 0x1406F9808 (sub_1406F9808.c)
 *     sub_140A51CA4 @ 0x140A51CA4 (sub_140A51CA4.c)
 *     sub_140A90ED8 @ 0x140A90ED8 (sub_140A90ED8.c)
 *     sub_140A9A2E8 @ 0x140A9A2E8 (sub_140A9A2E8.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B21F30 @ 0x140B21F30 (sub_140B21F30.c)
 *     sub_140B25E30 @ 0x140B25E30 (sub_140B25E30.c)
 *     sub_140B270C4 @ 0x140B270C4 (sub_140B270C4.c)
 *     sub_140B2DEA8 @ 0x140B2DEA8 (sub_140B2DEA8.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           (_DWORD)ThreadHandle,
           (__int64)ClientId,
           (__int64)StartRoutine,
           (__int64)StartContext,
           0LL,
           0LL);
}
