/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406DEF50
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140255FD0 (RtlCheckPortableOperatingSystem.c)
 *     sub_1403C7B58 @ 0x1403C7B58 (sub_1403C7B58.c)
 *     sub_1403D35C8 @ 0x1403D35C8 (sub_1403D35C8.c)
 *     sub_1403D3830 @ 0x1403D3830 (sub_1403D3830.c)
 *     sub_1403DD97C @ 0x1403DD97C (sub_1403DD97C.c)
 *     sub_140604E78 @ 0x140604E78 (sub_140604E78.c)
 *     sub_14061B950 @ 0x14061B950 (sub_14061B950.c)
 *     sub_14061BAA0 @ 0x14061BAA0 (sub_14061BAA0.c)
 *     sub_140639DA4 @ 0x140639DA4 (sub_140639DA4.c)
 *     sub_140AF71F0 @ 0x140AF71F0 (sub_140AF71F0.c)
 *     sub_140B2564C @ 0x140B2564C (sub_140B2564C.c)
 *     sub_140B2B090 @ 0x140B2B090 (sub_140B2B090.c)
 *     sub_140B2E06C @ 0x140B2E06C (sub_140B2E06C.c)
 * Callees:
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return sub_140781F40(RelativeTo, Path, QueryTable, Context);
}
